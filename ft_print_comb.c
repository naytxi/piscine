/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naotegui <naotegui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:35:16 by naotegui          #+#    #+#             */
/*   Updated: 2023/10/17 16:02:34 by naotegui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	one;
	int	two;
	int	tree;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8')
		{
			tree = two + 1;
			while (tree <= '9')
			{
				write (1, &one, 1);
				write (1, &two, 1);
				write (1, &tree, 1);
				if (one != '7')
					write (1, ", ", 2);
				tree++;
			}
			two++;
		}
		one++;
	}
}
