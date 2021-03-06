/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:58:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/04/11 22:32:42 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	ft_width(int cut, char *str, t_indic *flag)
{
	int i;

	i = 0;
	i += print_width(flag->width, cut, 0);
	ft_putstr(str);
	if (flag->width < 0)
		i += print_width(-flag->width, cut, 0);
	return (i + cut);
}

static	int	ft_minus(int cut, char *str, t_indic *flag)
{
	int i;

	i = 0;
	if (flag->dot >= 0)
	{
		i += print_cut(str, flag->dot);
		cut = flag->dot;
	}
	else
	{
		i += cut;
		ft_putstr(str);
	}
	i += print_width(flag->width, cut, 0);
	return (i);
}

static	int	ft_dot(char *str, t_indic *flag)
{
	int i;

	i = 0;
	if (flag->width)
		i += print_width(flag->width, flag->dot, 0);
	i += print_cut(str, flag->dot);
	if (flag->width < 0)
		i += print_width(-flag->width, flag->dot, 0);
	return (i);
}

int				ft_string(t_indic *flag, va_list *va)
{
	char	*str;
	int		cut;
	int		res;

	res = 0;
	str = va_arg(*va, char *);
	cut = ft_strlen(str);
	if (flag->dot > cut)
		flag->dot = cut;
	if (flag->minus)
		res = ft_minus(cut, str, flag);
	else if (flag->dot >= 0)
		res = ft_dot(str, flag);
	else
		res = ft_width(cut, str, flag);
	return (res);
}
