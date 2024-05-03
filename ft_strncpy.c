/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:33:15 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/08 17:23:08 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*original;

	original = dest;
	while (n > 0)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
		n--;
	}
	return (original);
}

/*int main(void) 
{
	char source[] = "Hi, Friends";
	char destiny[5];
	ft_strncpy(destiny, source, 8);
	printf("copied chain: %s\n", destiny);
	return(0);
}*/
