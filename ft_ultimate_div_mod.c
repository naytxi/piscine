/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naoteguin@student.42urduliz.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:57:42 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/20 11:40:32 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	one;
	int	two;

	one = *a / *b;
	two = *a % *b;
	*a = one;
	*b = two;
}

/*int main (void)
{
	int number1 = 15;
	int number2 = 9;
	printf("Antes de ejecutar es %d y %d\n", number1, number2);
	ft_ultimate_div_mod(&number1, &number2);
	printf("Despues de ejecutar es %d y %d\n",number1, number2);
	return(0);
}*/
