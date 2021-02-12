/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:58:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/12 10:33:57 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	void	ft_width(int cut, char *str, t_indic *flag)
{
	print_width(flag->width, cut, 0);
	ft_putstr(str);
	if (flag->width < 0)
		print_width(-flag->width, cut, 0);
}

static	void	ft_minus(int cut, char *str, t_indic *flag)
{
	if (flag->dot >= 0)
	{
		print_cut(str, flag->dot);
		cut = flag->dot;
	}
	else
		ft_putstr(str);
	print_width(flag->width, cut, 0);
}

static	void	ft_dot(char *str, t_indic *flag)
{
	if (flag->width)
		print_width(flag->width, flag->dot, 0);
	print_cut(str, flag->dot);
	if (flag->width < 0)
		print_width(-flag->width, flag->dot, 0);
}

int				ft_string(t_indic *flag, va_list *va)
{
	char	*str;
	int		cut;

	str = va_arg(*va, char *);
	cut = ft_strlen(str);
	if (flag->dot > cut)
		flag->dot = cut;
	if (flag->minus)
	{
		ft_minus(cut, str, flag);
		return (0);
	}
	if (flag->dot >= 0)
	{
		ft_dot(str, flag);
		return (0);
	}
	ft_width(cut, str, flag);
	return (0);
}
