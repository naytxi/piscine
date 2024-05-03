/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:13:26 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/19 16:19:40 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
    char *s1;
    char *s2;
    int result;
    s1 = "chimichanga";
    s2 = "sushi";
    result = ft_strcmp(s1, s2);
    printf("Result is %d\n", result);
    return(0);
}*/
