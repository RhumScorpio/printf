/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:28:01 by clesaffr          #+#    #+#             */
/*   Updated: 2021/04/11 22:47:07 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	void	add_ox(char *str)
{
	ft_putstr("0x");
	ft_putstr(str);
}

static	int		len_nbr(unsigned long long nbr, int len)
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
	int		len;
	int		size;
	int		i;

	base = "0123456789abcdef";
	len = ft_strlen(base);
	size = len_nbr(nbr, len);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	i = 0;
	while (nbr)
	{
		i = nbr % len;
		nbr = nbr / 16;
		size--;
		str[size] = base[i];
	}
	return (str);
}

int				ft_pointer(t_indic *flag, va_list *va)
{
	unsigned long long	address;
	char				*str;
	int					cut;
	int					res;

	address = va_arg(*va, unsigned long long);
	str = ft_pbase(address);
	cut = ft_strlen(str) + 2;
	res = cut;
	if (flag->minus)
	{
		add_ox(str);
		res += print_width(flag->width, cut, 0);
	}
	else if (flag->zero)
	{
		ft_putstr("0x");
		res += print_width(flag->width, cut, 1);
		ft_putstr(str);
	}
	else
	{
		res += print_width(flag->width, cut, 0);
		add_ox(str);
	}
	free(str);
	return (res);
}
