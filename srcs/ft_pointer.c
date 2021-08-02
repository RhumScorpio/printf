/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:28:01 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/02 16:04:16 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

static	char	*ft_pbase(unsigned long long nbr)
{
	char	*base;
	char	*str;
	int		size;
	int		i;

	base = "0123456789abcdef";
	size = len_nbr(nbr, 16);
	str = malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	i = 0;
	while (nbr)
	{
		i = nbr % 16;
		nbr = nbr / 16;
		size--;
		str[size] = base[i];
	}
	return (str);
}

static int	result_pointer(t_indic *flag, char *str, int cut)
{
	int	res;

	res = 0;
	if (flag->minus)
	{
		res += add_ox(str);
		res += print_width(flag->width, cut, 0);
	}
	else if (flag->zero)
	{
		res += ft_putstr("0x");
		res += print_width(flag->width, cut, 1);
		res += ft_putstr(str);
	}
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
