/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:02:09 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/19 10:35:50 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;
    int i;
    
    i = 0;
    if(min >= max)
        return(NULL);
    tab = (int *)malloc(sizeof(*tab) * (max - min));
    while(min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return(tab);
}

int main(void)
{
    int min;
    int max;
    min = 5,
    max = 15;
    int *result = ft_range(min, max);
    if(result != NULL)
    {
        printf("array");
        int i = 0;
        while(i <(max - min))
        {
            printf("%d", result[i]);
            i++;
        }
        free(result);
    }
    return(0);
}