/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/26 15:07:28 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		ft_dot(t_indic *flag, char *str)
{
	print_width(flag->dot, ft_strlen(str), 1);
	ft_putstr(str);
	free(str);
	return (0);
}

static int		ft_minus(int cut, t_indic *flag, char *str)
{
	if (flag->dot > 0)
		ft_dot(flag, str);
	else
	{
		ft_putstr(str);
		free(str);
	}
	print_width(flag->width, cut, 0);
	return (0);
}

static int		ft_zero(t_indic *flag, char *str)
{
	print_width(flag->width, ft_strlen(str), 1);
	ft_putstr(str);
	free(str);
	return (0);
}

int				ft_hexa(char c, t_indic *flag, va_list *va)
{
	char			*str;
	int				cut;
	unsigned int	nbr;

	nbr = (unsigned int)va_arg(*va, int);
	str = ft_xbase(nbr, c);
	cut = ft_strlen(str);
	if (flag->zero)
		return (ft_zero(flag, str));
	if (flag->minus)
		return (ft_minus(cut, flag, str));
	if (flag->dot > 0)
	{
		if (cut > flag->dot)
			flag->dot = cut;
		if (flag->width)
			print_width(flag->width, flag->dot, 0);
		return (ft_dot(flag, str));
	}
	print_width(flag->width, cut, 0);
	ft_putstr(str);
	free(str);
	return (0);
}
