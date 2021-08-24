/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:56:06 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 19:45:49 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_char(t_indic *flag, va_list *va)
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
		if (flag->width > 0)
			res = print_width(flag->width, 1, 0);
		ft_putchar(c);
		if (flag->width < 0)
			res = print_width(-flag->width, 1, 0);
	}
	res++;
	return (res);
}
