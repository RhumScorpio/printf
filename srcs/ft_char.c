/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:56:06 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/08 10:26:15 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_char(t_indic *flag, va_list *va)
{
	char	c;
	int		i;

	c = va_arg(*va, int);
	if (flag->zero)
	{
		i = print_width(flag->width, 1, 1);
		ft_putchar(c);
		return (i + 1);
	}
	if (flag->minus)
	{
		ft_putchar(c);
		i = print_width(flag->width, 1, 0);
		return (i + 1);
	}
	i = print_width(flag->width, 1, 0);
	ft_putchar(c);
	return (i + 1);
}
