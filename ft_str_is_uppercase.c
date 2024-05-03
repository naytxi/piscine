/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:59:52 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/30 12:15:14 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char strone[] = "VagyaGLH";
	char strtwo[] = "AGFVNWSAL";
	char strthree[] = "";
	char strfour[] = "3452323";

	printf("strone: %d\n", ft_str_is_uppercase(strone));
	printf("strtwo: %d\n", ft_str_is_uppercase(strtwo));
	printf("strthree: %d\n", ft_str_is_uppercase(strthree));
	printf("strfour: %d\n", ft_str_is_uppercase(strfour));

	return(0);
}*/
