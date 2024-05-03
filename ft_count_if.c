/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:30:35 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/26 14:39:46 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int number;

	
	i = 0;
	number = 0;
	while (tab[i])
	{
		if(f(tab[i]) == 1)
		{
			number++;
		}
		i++;
	}
	
	return(number);
}

int example_function(char *str)
{
	return strlen(str) % 2 != 0;
}

int main(void)
{
	char *cool_tab[] = {"instagram", "tiktok", "discord", "whatsapp", "", NULL};
	int result = ft_count_if(NULL, &example_function);
	printf("Number of words who achieve the parameters: %d\n", result);
	return(0);
}
