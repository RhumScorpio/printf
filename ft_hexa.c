/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 14:32:38 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		len_nbr(unsigned int nbr, int len)
{
	int i;
	i = 0;
	while (nbr)
	{
		nbr = nbr/len;
		i++;
	}
	return (i);
}

char	*ft_xbase(unsigned int nbr, char *base)
{
	char	*str;
	int 	len;
	int		size;
	int		i;

	len = ft_strlen(base);
	size = len_nbr(nbr, len);
	if(!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	i = 0;
	while(nbr)
	{
		i = nbr % len;
		nbr = nbr / 16;
		size--;
		str[size] = base[i];
	}
	return (str);
}

static void	ft_dot(t_indic *flag, char *str)
{
	print_width(flag->dot, ft_strlen(str), 1);
	ft_putstr(str);
}

static void ft_minus(t_indic *flag, char *str)
{
	if (flag->dot > 0)
		ft_dot(flag, str);
	else
		ft_putstr(str);
	print_width(flag->width, ft_strlen(str), 0);
}

static void	ft_zero(t_indic *flag, char *str)
{
	print_width(flag->width, ft_strlen(str), 1);
	ft_putstr(str);
}

int		ft_hexa(char c, t_indic *flag, va_list *va)
{
	char	*base;
	char	*str;
	int		nb;
	unsigned int	nbr;

	nb = va_arg(*va, int);
	if (nb < 0)
		flag->negative = 1;
	nbr = (unsigned int)nb;
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	str = ft_xbase(nbr, base);
	if (flag->zero)
	{
		ft_zero(flag, str);
		free(str);
		return (0);
	}
	if (flag->minus)
	{
		ft_minus(flag, str);
		free(str);
		return (0);
	}
	if (flag->dot > 0)
	{
		if (ft_strlen(str) > flag->dot)
			flag->dot = ft_strlen(str);
		if (flag->width)
			print_width(flag->width, flag->dot, 0); //-1 BIG STR // +1 SMOL STR
		ft_dot(flag, str);
		free(str);
		return (0);
	}
	print_width(flag->width, ft_strlen(str), 0);
	ft_putstr(str);
	free(str);
	return (0);
}
