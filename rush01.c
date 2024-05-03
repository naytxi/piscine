/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agucalle <agucalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 10:15:28 by agucalle          #+#    #+#             */
/*   Updated: 2023/10/15 14:41:45 by agucalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char d);

void	hello(int total, char start, char mid, char fin)
{
	int	j;

	j = 0;
	while (j < total)
	{
		if (j == 0)
			ft_putchar(start);
		else
		{
			if (j == total - 1)
				ft_putchar(fin);
			else
				ft_putchar(mid);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			hello(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				hello(x, '\\', '*', '/');
			else
				hello(x, '*', ' ', '*');
		}
		i++;
	}
}

