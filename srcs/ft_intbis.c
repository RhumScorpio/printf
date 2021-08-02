/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intbis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:49:47 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 01:11:40 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	int_dot(t_indic *flag, char *str, int cut)
{
	int	res;

	res = 0;
	if (cut - flag->negative > flag->dot && *str != '0')
		flag->dot = cut - flag->negative;
	if (flag->width > 0 && !flag->minus)
		res += print_width(flag->width, flag->dot + flag->negative, 0);
	if (*str == '0' && flag->dot == 0)
	{
		if (flag->width < 0)
			res += print_width(flag->width, 0, 0);
		return (res);
	}
	if (flag->negative)
		ft_putchar('-');
	res += print_width(flag->dot, cut - flag->negative, 1);
	res += ft_putstr(str + flag->negative) + flag->negative;
	if (flag->width < 0 || flag->minus)
		res += print_width(flag->width, flag->dot + flag->negative, 0);
	return (res);
}

int	int_minus(t_indic *flag, char *str, int cut)
{
	int	i;

	i = 0;
	if (*str == '0' && flag->dot == 0)
	{
		i += print_width(flag->width, 0, 0);
		return (i);
	}
	if (flag->dot >= 0)
		i += int_dot(flag, str, cut);
	else
	{
		i += ft_putstr(str);
		i += print_width(flag->width, cut, 0);
	}
	return (i);
}

int	int_zero(t_indic *flag, char *str, int cut)
{
	int	i;

	i = 0;
	if (*str == '0' && flag->dot == 0)
	{
		i += print_width(flag->width, 0, 0);
		return (i);
	}
	if (flag->dot >= 0)
	{
		i += int_dot(flag, str, cut);
		return (i);
	}
	if (flag->negative)
		ft_putchar('-');
	if (flag->width >= 0)
		i += print_width(flag->width, cut, 1);
	i += ft_putstr(str + flag->negative) + flag->negative;
	if (flag->width < 0)
		i += print_width(-flag->width, cut, 0);
	return (i);
}

int	int_width(t_indic *flag, char *str, int cut)
{
	int	i;

	i = 0;
	if (*str == '0' && flag->dot == 0)
	{
		i += print_width(flag->width, 0, 0);
		return (i);
	}
	else
	{
		if (flag->width > 0)
			i += print_width(flag->width, cut, 0);
		i += ft_putstr(str);
		if (flag->width < 0)
			i += print_width(-flag->width, cut, 0);
	}
	return (i);
}
