/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:27:01 by naotegui          #+#    #+#             */
/*   Updated: 2024/03/13 13:43:31 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(char *tab)
{
	int	i;
	int	j;
	char	hello;
	int size;

	i = 0;
	while(tab[i] != '\0')
		i++;
	size = i;
	j = size - 1;
	i = 0;
	while (i < j)
	{
		hello = tab[i];
		tab[i] = tab[j];
		tab[j] = hello;
		i++;
		j--;
	}
}

int	main (void)
{
	char array[] = "Hello fellow folks";
//	int size = 19;
	printf("Inverted array: ");

	ft_rev_int_tab(array);
		printf("%s\n", array);
		return(0);
}