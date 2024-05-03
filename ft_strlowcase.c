/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:53:17 by naotegui          #+#    #+#             */
/*   Updated: 2023/11/01 09:31:22 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (original);
}

/*int main(void)
{
	char strpast[] = "ILL BE THERE FOR YOU";
	printf("original: %s\n",strpast);
	ft_strlowcase(strpast);
	printf("change: %s\n", strpast);
	return(0);
}*/
