/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:46:30 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/14 13:15:08 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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

/*int	main(void)
{
	char strone[] = "Potatopotaito";
	char strtwo[] = "12432";
	char strthree[] = "";
	char strfour[] = "????";

	printf("strone: %d\n", ft_str_is_numeric(strone));
	printf("strtwo: %d\n", ft_str_is_numeric(strtwo));
	printf("strthree %d\n", ft_str_is_numeric(strthree));
	printf("strfour: %d\n", ft_str_is_numeric(strfour));
	
	return(0);
}*/
