/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_error_revision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinedo- <dpinedo-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:45:33 by dpinedo-          #+#    #+#             */
/*   Updated: 2023/10/29 15:36:34 by dpinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_input_error_revision_number(char *str)
{
	if (*str != '\0')
	{
		while (*str)
		{
			if (!('0' <= *str && *str <= '9'))
				return (1);
			str++;
		}
		return (0);
	}
	else
		return (1);
}
