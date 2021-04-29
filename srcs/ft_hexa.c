/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/04/11 22:44:05 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		ft_dot(t_indic *flag, char *str)
{
	int i;

	i = print_width(flag->dot, ft_strlen(str), 1);
	ft_putstr(str);
	return (i);
}

static int		ft_minus(int cut, t_indic *flag, char *str)
{
	int i;

	if (flag->dot > 0)
		i = ft_dot(flag, str);
	else
		ft_putstr(str);
	i += print_width(flag->width, cut, 0);
	return (i);
}

static int		ft_zero(t_indic *flag, char *str)
{
	int i;

	i = print_width(flag->width, ft_strlen(str), 1);
	ft_putstr(str);
	return (i);
}

int				ft_hexa(char c, t_indic *flag, va_list *va)
{
	char			*str;
	int				cut;
	int				res;
	unsigned int	nbr;

	res = 0;
	nbr = (unsigned int)va_arg(*va, int);
	str = ft_xbase(nbr, c);
	cut = ft_strlen(str);
	if (flag->zero)
		res = ft_zero(flag, str);
	else if (flag->minus)
		res = ft_minus(cut, flag, str);
	else if (flag->dot > 0)
	{
		if (cut > flag->dot)
			flag->dot = cut;
		if (flag->width)
			res += print_width(flag->width, flag->dot, 0);
		res += ft_dot(flag, str);
	}
	else
	{
		res = print_width(flag->width, cut, 0);
		ft_putstr(str);
	}
	res += ft_strlen(str);
	free(str);
	return (res);
}
