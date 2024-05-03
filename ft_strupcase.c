/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:46:58 by naotegui          #+#    #+#             */
/*   Updated: 2023/11/01 09:28:04 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original);
}

/*int main(void)
{
	char stroriginal[] = "and that's all folks";
	printf("original: %s\n",stroriginal);
	ft_strupcase(stroriginal);
	printf("change: %s\n",stroriginal);
	return (0);
}*/
