/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:18:35 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/30 12:44:39 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
	char strone[] = "hS4sbHSbsOJ";
	char strtwo[] = "?$&!";
	char strthree[] = "ñ";
	char strfour[] = "";

	printf("strone: %d\n", ft_str_is_printable(strone));
	printf("strtwo: %d\n", ft_str_is_printable(strtwo));
	printf("strthree: %d\n", ft_str_is_printable(strthree));
	printf("strfour: %d\n", ft_str_is_printable(strfour));
	
	return(0);
}*/
