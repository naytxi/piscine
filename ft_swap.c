/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:48:33 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/19 16:21:41 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	hello;

	hello = *a;
	*a = *b;
	*b = hello;
}

/*int	main()
{
	int number = 5;
	int value = 9;
	printf("Antes de ejecutar: number = %d y value = %d\n", number, value);
	ft_swap(&number, &value);
	printf("Despues de ejecutar: number = %d y value = %d\n", number, value);
	return (0);
}*/
