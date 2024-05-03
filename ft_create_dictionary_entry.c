/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dictionary_entry.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinedo- <dpinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:10:34 by dpinedo-          #+#    #+#             */
/*   Updated: 2023/10/29 17:39:16 by dpinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_strlen_d(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

struct s_dictionary
{
	char	*word_name;
	char	*number;
	int		size;
};

void	ft_create_entry_in_memory(char *word_name, char *number, )
{
	ft_strlcpy(new_entry[0].word_name, word_name, ft_strlen_d(word_name) + 1);
	ft_strlcpy(new_entry[0].number, number, ft_strlen_d(number) + 1);
	new_entry[0].size = ft_strlen_d(number);
}


struct	s_dictionary	*ft_create_dictionary_struct(int dictionary_size)
{
	struct s_dictionary	*dictionary_struct;

	dictionary_struct = (struct s_dictionary *)
		malloc(sizeof(struct s_dictionary) * dictionary_size);
	return (dictionary_struct);
}
