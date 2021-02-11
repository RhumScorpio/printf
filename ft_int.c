/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:50:28 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/11 17:05:47 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_dot(t_indic *flag, char *str)
{
	printf("#(ft_int)flag->dot === %d\n", flag->dot);
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

static void ft_minus(t_indic *flag, char *str)
{
	int cut;

	cut = ft_strlen(str);
	if (flag->dot > ft_strlen(str))
		cut = flag->dot + flag->negative;
	if (flag->dot > 0)
		ft_dot(flag, str);
	else
		ft_putstr(str);
	print_width(flag->width, cut, 0);
}

static void	ft_zero(t_indic *flag, char *str)
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
}

int	ft_int(t_indic *flag, va_list *va)
{
	char	*str;
	int		nbr;
	
	printf("#ENTER FT_INT\n");
	nbr = va_arg(*va, int);
	str = ft_itoa(nbr);
	if (nbr < 0)
		flag->negative = 1;
	printf("#(ft_int)flag->zero = %d\n", flag->zero);
	if (flag->zero)
	{
		ft_zero(flag, str);
		free(str);
		return (0);
	}
	printf("#(ft_int)flag->minus = %d\n", flag->minus);
	if (flag->minus)
	{
		ft_minus(flag, str);
		free(str);
		return (0);
	}
	printf("#(ft_int)flag->dot = %d\n", flag->dot);
	if (flag->dot > 0)
	{
		printf("#(ft_int)ENTER DOT\n");
		if (ft_strlen(str) - flag->negative > flag->dot)
			flag->dot = ft_strlen(str);
		if (flag->width)
			print_width(flag->width, flag->dot + flag->negative, 0);
		ft_dot(flag, str);
		if (flag->width < 0)
			print_width(-flag->width, flag->dot + flag->negative, 0);
		free(str);
		return (0);
	}
	print_width(flag->width, ft_strlen(str), 0);
	ft_putstr(str);
	if (flag->width < 0)
		print_width(-flag->width, ft_strlen(str), 0);
	free(str);
	return (0);
}
