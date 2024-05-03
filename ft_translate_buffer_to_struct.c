/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate_buffer_to_struct.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinedo- <dpinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 21:09:59 by dpinedo-          #+#    #+#             */
/*   Updated: 2023/10/29 20:05:16 by dpinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_create_entry_in_memory(char *word_name, char *number);

void	ft_put_buffer_into_dictionary_entry(char *buffer_dictionary,
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

int	ft_count_lines(char *buffer_dictionary)
{
	int	dictionary_size;

	dictionary_size = 1;
	while (*buffer_dictionary)
	{
		if (*buffer_dictionary == '\n')
			dictionary_size ++;
		buffer_dictionary++;
	}
	return (dictionary_size + 1);
}

void	ft_create_entry_in_memory(char *word_name, char *number, 
		struct s_dictionary *dictionary_structure)
{
	ft_strlcpy(dictionary_structure -> word_name, word_name, ft_strlen_d(word_name) + 1);
	ft_strlcpy(dictionary_structure -> number, number, ft_strlen_d(number) + 1);
	dictionary_structure -> size = ft_strlen_d(number);
}
