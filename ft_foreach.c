/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:37:36 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/22 11:53:45 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_foreach(int *tab, int lenght, void(*f)(int))
{
    int i;

    i = 0;
    while(i < lenght)
        f(tab[i++]);
}

void ft_printnumber(int num)
{
    printf("%d", num);
}

int main (void)
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int lenght = sizeof(tab) / sizeof(tab[0]);
    printf("original string: ");
    ft_foreach(tab, lenght, &ft_printnumber);
    printf("\n");
    return (0);
}