/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_and_read_dictionary.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinedo- <dpinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:45:58 by dpinedo-          #+#    #+#             */
/*   Updated: 2023/10/29 21:56:54 by dpinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	ft_strlen_d(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

struct s_dictionary
{
	char	*word_name;
	char	*number;
	int		size;
};

struct s_dictionary	*ft_allocate_dictionary_memory(void)
{
	struct s_dictionary	*dictionary_structure;

	dictionary_structure = (struct s_dictionary *)
		malloc(sizeof(struct s_dictionary) * 60);
	return (dictionary_structure);
}

void	ft_create_entry_in_memory(char *word_name, char *number,
		struct s_dictionary *dictionary_structure)
{
	unsigned int	number_l;
	unsigned int	name_l;

	name_l = ft_strlen_d(word_name) + 1;
	number_l = ft_strlen_d(number) + 1;
	ft_strlcpy(dictionary_structure -> word_name, word_name, name_l);
	ft_strlcpy(dictionary_structure -> number, number, number_l);
	dictionary_structure -> size = ft_strlen_d(number);
}

void	ft_put_buffer_into_entry(char *buffer_dictionary,
		struct s_dictionary *dictionary_structure)
{
	char	*word_name;
	char	*number;

	while (*buffer_dictionary)
	{
		while (*buffer_dictionary != ':')
		{
			*number = *buffer_dictionary;
			buffer_dictionary++;
			number++;
		}
		*number = '\0';
		buffer_dictionary += 2;
		while (*buffer_dictionary != '\n' || *buffer_dictionary != '\0')
		{
			*word_name = *buffer_dictionary;
			buffer_dictionary++;
			word_name++;
		}
		*word_name = '\0';
		if (*buffer_dictionary != '\0')
			buffer_dictionary++;
		ft_create_entry_in_memory(word_name, number, dictionary_structure);
		dictionary_structure++;
	}
}

int	ft_open_and_read_dictionary(char *dictionary_file_name)
{
	int					file_descriptor;
	char				*buffer_dictionary;
	struct s_dictionary	*dictionary_structure;

	buffer_dictionary = (char *) malloc(1000);
	file_descriptor = open(dictionary_file_name, O_RDONLY);
	if (file_descriptor == -1)
		return (1);
	read(file_descriptor, buffer_dictionary, 1000);
	close(file_descriptor);
	while (*buffer_dictionary)
	{
		write(1, buffer_dictionary, 1);
		buffer_dictionary++;
	}
	dictionary_structure = ft_allocate_dictionary_memory();
	ft_put_buffer_into_entry(buffer_dictionary, dictionary_structure);
	return (0);
}
