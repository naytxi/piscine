/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:07:16 by naotegui          #+#    #+#             */
/*   Updated: 2024/01/11 10:03:07 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (src[size])
	size++;
	if((str = (char *)malloc (sizeof(*str) * size)) == NULL)
	{
		return(NULL);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
    char *original = "gotta catch them all";
    char *duplicated = ft_strdup(original);
    if(duplicated != NULL)
    {
        printf("original: %s, duplicated: %s\n", original, duplicated);
        free(duplicated);   
    }
    return(0);
}*/
