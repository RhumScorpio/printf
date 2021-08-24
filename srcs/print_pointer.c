/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:28:01 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/23 17:19:13 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static	int	add_ox(char *str)
{
	int	i;

	i = ft_putstr("0x");
	i += ft_putstr(str);
	return (i);
}

static	int	len_nbr(unsigned long long nbr, int len)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / len;
		i++;
	}
	return (i);
}

static int	ifdot(t_indic *flag, int cut, char *str)
{
	int	i;

	i = 0;
	if (flag->dot < cut)
		flag->dot = cut;
	if (flag->width > 0 && !flag->minus)
		i += print_width(flag->width, flag->dot + 2, 0);
	i += putzeroes(flag->dot, cut, str);
	if (flag->width < 0 || flag->minus)
		i += print_width(flag->width, flag->dot + 2, 0);
	return (i);
}

static int	result_pointer(t_indic *flag, char *str, int cut)
{
	int	res;

	res = 0;
	cut = ft_strlen(str);
	if (flag->dot)
		res += ifdot(flag, cut, str);
	else if (flag->minus)
	{
		res += add_ox(str);
		res += print_width(flag->width, cut, 0);
	}
	else if (flag->zero)
		res += putzeroes(flag->width, cut, str);
	else
	{
		res += print_width(flag->width, cut, 0);
		res += add_ox(str);
	}
	return (res);
}

int	ft_pointer(t_indic *flag, va_list *va)
{
	unsigned long long	address;
	char				*str;
	int					cut;
	int					res;

	res = 0;
	address = va_arg(*va, unsigned long long);
	if (!address)
	{
		if (flag->width && !(flag->minus))
			res += print_width(flag->width, 5, 0);
		res += ft_putstr("(nil)");
		if (flag->minus)
			res += print_width(flag->width, 5, 0);
		return (res);
	}
	str = ft_pbase(address);
	cut = ft_strlen(str) + 2;
	res = result_pointer(flag, str, cut);
	free(str);
	return (res);
}
