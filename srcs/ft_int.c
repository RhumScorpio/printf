/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:50:28 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/08 11:16:14 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_dot(t_indic *flag, char *str)
{
	if (flag->negative)
		ft_putchar('-');
	print_width(flag->dot, ft_strlen(str) - flag->negative, 1);
	ft_putstr(str + flag->negative);
	free(str);
}

static int	ft_minus(t_indic *flag, char *str)
{
	int cut;
	int i;

	cut = ft_strlen(str);
	if (flag->dot > ft_strlen(str))
		cut = flag->dot + flag->negative;
	if (flag->dot > 0)
		ft_dot(flag, str);
	else
		ft_putstr(str);
	i = print_width(flag->width, cut, 0) + cut;
	free(str);
	return (i);
}

static int	ft_zero(t_indic *flag, char *str)
{
	int i;

	if (flag->negative)
		ft_putchar('-');
	i = print_width(flag->width, ft_strlen(str), 1);
	ft_putstr(str + flag->negative);
	i += ft_strlen(str) + flag->negative;
	free(str);
	return (i);
}

static int	ft_width(t_indic *flag, char *str)
{
	int i;

	i = print_width(flag->width, ft_strlen(str), 0);
	ft_putstr(str);
	if (flag->width < 0)
		i = print_width(-flag->width, ft_strlen(str), 0);
	i += ft_strlen(str);
	free(str);
	return (i);
}

int			ft_int(t_indic *flag, va_list *va)
{
	char	*str;
	int		nbr;
	int		i;

	i = 0;
	nbr = va_arg(*va, int);
	str = ft_itoa(nbr);
	if (nbr < 0)
		flag->negative = 1;
	if (flag->zero)
		return (ft_zero(flag, str));
	if (flag->minus)
		return (ft_minus(flag, str));
	if (flag->dot > 0)
	{
		if (ft_strlen(str) - flag->negative > flag->dot)
			flag->dot = ft_strlen(str) - flag->negative;
		if (flag->width)
			i = print_width(flag->width, flag->dot + flag->negative, 0);
		ft_dot(flag, str);
		if (flag->width < 0)
			i = print_width(-flag->width, flag->dot + flag->negative, 0);
		return (i + flag->dot);
	}
	return (ft_width(flag, str));
}
