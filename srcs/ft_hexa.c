/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/28 20:15:13 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		ft_dot(t_indic *flag, char *str, int cut)
{
	int i;

	i = 0;
	if (flag->dot == 0 && *str == '0')
			return (print_width(flag->width, flag->dot, 0));
	if (cut > flag->dot)
			flag->dot = cut;
	if (flag->width && !flag->minus)
			i += print_width(flag->width, flag->dot, 0);
	i += print_width(flag->dot, ft_strlen(str), 1);
	i += ft_putstr(str);
	if (flag->minus)
			i += print_width(flag->width, flag->dot, 0);
	return (i);
}

static int		ft_minus(int cut, t_indic *flag, char *str)
{
		int i;

		i = 0;
		if (flag->dot >= 0)
				i += ft_dot(flag, str, cut);
		else
				i += ft_putstr(str);
		i += print_width(flag->width, cut, 0);
		return (i);
}

static int		ft_zero(t_indic *flag, char *str)
{
		int i;

		i = print_width(flag->width, ft_strlen(str), 1);
		i += ft_putstr(str);
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

		if (flag->dot >= 0)
		{
				res += ft_dot(flag, str, cut);
		}
		else	if (flag->zero)
				res = ft_zero(flag, str);
		else	if (flag->minus)
		{
				res = ft_minus(cut, flag, str);
		}
		else
		{
				res = print_width(flag->width, cut, 0);
				res += ft_putstr(str);
		}
		free(str);
		return (res);
}
