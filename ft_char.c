/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:56:06 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/03 17:18:58 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_char(t_indic *flag, va_list *va)
{
	char	c;

	c = va_arg(*va, int);
	if (flag->zero)
	{
		print_width(flag->width, 1, 1);
		ft_putchar(c);
		return (0);
	}
	if (flag->minus)
	{
		ft_putchar(c);
		print_width(flag->width, 1, 0);
		return (0);
	}
	print_width(flag->width, 1, 0);
	ft_putchar(c);
	return (0);
}
