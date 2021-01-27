/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:50:28 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/27 17:23:08 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_int(t_indic *flag, va_list *va)
{
	char	*str;
	int		nbr;

	nbr = va_arg(*va, int);
	str = ft_itoa(nbr);
	if (flag->zero)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			print_width((flag->width - 1), ft_strlen(str), 1);
			ft_putstr(str + 1);
		}
		else
		{
			print_width(flag->width, ft_strlen(str), 1);
			ft_putstr(str);
		}
		return (0);
	}
	if (flag->minus)
	{
		ft_putstr(str);
		print_width(flag->width, ft_strlen(str), 0);
		return (0);
	}
	if (flag->dot)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			print_width(flag->dot, ft_strlen(str), 1);
			ft_putstr(str + 1);
		}
		else
		{
			print_width(flag->dot, ft_strlen(str), 1);
			ft_putstr(str);
		}
		return (0);
	}
	print_width(flag->width, ft_strlen(str), 0);
	ft_putstr(str);
	return (0);
}
