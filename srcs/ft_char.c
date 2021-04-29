/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:56:06 by clesaffr          #+#    #+#             */
/*   Updated: 2021/04/11 22:39:20 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_char(t_indic *flag, va_list *va)
{
	char	c;
	int		res;

	res = 0;
	c = va_arg(*va, int);
	if (flag->zero)
	{
		res = print_width(flag->width, 1, 1);
		ft_putchar(c);
	}
	else if (flag->minus)
	{
		ft_putchar(c);
		res = print_width(flag->width, 1, 0);
	}
	else
	{
		res = print_width(flag->width, 1, 0);
		ft_putchar(c);
	}
	res++;
	return (res);
}
