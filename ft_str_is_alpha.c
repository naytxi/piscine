/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:30:17 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/11 13:47:14 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
	char strone[] = "Tomatotomaito";
	char strtwo[] = "Tomato, tomaito?";
	char strthree[] = "";
	char strfour[] = "!!!!";

	printf("strone: %d\n", ft_str_is_alpha(strone));
	printf("strtwo: %d\n", ft_str_is_alpha(strtwo));
	printf("strthree: %d\n", ft_str_is_alpha(strthree));
	printf("strfour: %d\n", ft_str_is_alpha(strfour));

	return(0);
}*/
