/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:58:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 01:12:43 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static	int	ft_width(int cut, char *str, t_indic *flag)
{
	int	i;

	i = 0;
	if (flag->width > 0)
		i += print_width(flag->width, cut, 0);
	i += ft_putstr(str);
	if (flag->width < 0)
		i += print_width(-flag->width, cut, 0);
	return (i);
}

static	int	ft_minus(int cut, char *str, t_indic *flag)
{
	int	i;

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
	int	i;

	i = 0;
	if (flag->width >= 0)
		i += print_width(flag->width, flag->dot, 0);
	i += print_cut(str, flag->dot);
	if (flag->width < 0)
		i += print_width(-flag->width, flag->dot, 0);
	return (i);
}

int	ft_string(t_indic *flag, va_list *va)
{
	char	*str;
	int		cut;
	int		res;

	res = 0;
	str = va_arg(*va, char *);
	if (!str)
	{
		str = "(null)";
		if (flag->dot > 0 && flag->dot < 6)
			flag->dot = 0;
	}
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
