/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:21:22 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/30 12:08:53 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
	char strone[] = "aZVkjs";
	char strtwo[] = "agftresj";
	char strthree[] = "";
	char strfour[] = "1234";

	printf("strone: %d\n", ft_str_is_lowercase(strone));
	printf("strtwo: %d\n", ft_str_is_lowercase(strtwo));
	printf("strthree: %d\n", ft_str_is_lowercase(strthree));
	printf("strfour: %d\n", ft_str_is_lowercase(strfour));

	return(0);
}*/
