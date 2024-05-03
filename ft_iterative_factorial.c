/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:13:36 by naotegui          #+#    #+#             */
/*   Updated: 2023/12/19 16:08:34 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	total;

	a = 1;
	total = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (a <= nb)
	{
		total *= a;
		a++;
	}
	return (total);
}

/*int main (void)
{
    int number;
    number = 42;
    int result;
    result = ft_iterative_factorial(number);
    printf("result of the number %d, is %d\n",number, result);
    return(0);
}*/