/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_reference_dictionary.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpinedo- <dpinedo-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:10:15 by dpinedo-          #+#    #+#             */
/*   Updated: 2023/10/28 19:07:22 by dpinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include "rush02_header_file.h"

void	ft_new_reference_dictionary(char *new_dictionary)
{
	write(1, new_dictionary, 1);
}
