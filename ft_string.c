/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:58:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 14:32:52 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_string(t_indic *flag, va_list *va)
{
	char	*str;
	int		cut;

	str = va_arg(*va, char *);
	cut = ft_strlen(str);
	if (flag->dot > cut)
		flag->dot = cut;
	if (flag->minus)
	{
		if (flag->dot > 0)
		{
			print_cut(str, flag->dot);
			cut = flag->dot;
		}
		else
			ft_putstr(str);
		print_width(flag->width, cut, 0);
		return (0);
	}
	if (flag->dot >= 0)
	{
		if (flag->width)
			print_width(flag->width, flag->dot, 0);
		print_cut(str, flag->dot);
		return (0);
	}
	print_width(flag->width, cut, 0);
	ft_putstr(str);
	return (0);
}
