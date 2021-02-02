/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:50:28 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/28 16:25:38 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_dot(t_indic *flag, char *str)
{
		if (flag->negative)
		{
			ft_putchar('-');
			print_width(flag->dot, ft_strlen(str) - 1, 1);
			ft_putstr(str + 1);
		}
		else
		{
			print_width(flag->dot, ft_strlen(str), 1);
			ft_putstr(str);
		}
}

int	ft_int(t_indic *flag, va_list *va)
{
	char	*str;
	int		nbr;

	nbr = va_arg(*va, int);
	str = ft_itoa(nbr);
	if (nbr < 0)
		flag->negative = 1;
	else
		flag->negative = 0;
	if (flag->zero)
	{
		if (flag->negative)
		{
			ft_putchar('-');
			print_width((flag->width), ft_strlen(str), 1);
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
		if (flag->dot > 0)
			ft_dot(flag, str);
		else
			ft_putstr(str);
		print_width(flag->width, ft_strlen(str), 0); //RAJOUT D'UN MOINS 2 POUR PETITE STR
		return (0);
	}
	if (flag->dot > 0)
	{
		if (flag->width)
			print_width(flag->width, ft_strlen(str) + flag->negative, 0); //-1 BIG STR // +1 SMOL STR
		ft_dot(flag, str);
		return (0);
	}
	print_width(flag->width, ft_strlen(str), 0);
	ft_putstr(str);
	return (0);
}
