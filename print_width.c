/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:00:22 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/21 08:15:10 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		print_width(int width, int cut, int zero)
{
	int lenght;
	int i;

	i = 0;
	lenght = width - cut;
	while (i < lenght)
	{
		if(zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		i++;
	}
	return (i);
}
