/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/01 22:18:16 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		len_nbr(int nbr, int len)
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

char	*ft_xbase(int nbr, char *base)
{
	char	*str;
	int 	len;
	int		size;
	int		i;

	len = ft_strlen(base);
	size = len_nbr(nbr, len);
	printf("SIZE --- %d\n", size);
	if(!(str = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while(size--)
	{
		i = nbr % len;
		nbr = nbr / 16;
		str[size] = base[i];
	}
	return (str);
}

void	ft_hexa(char c, t_indic *flag, va_list *va)
{
	char	*base;
	char	*hexa;
	int		nbr;

	nbr = va_arg(*va, int);
	if (nbr < 0)
	{
		nbr = -nbr;
		flag->negative = 1;
	}

	if (c == 'x' && flag->negative)
		base = "fedcba9876543210";
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X' && flag->negative)
		base = "FEDCBA9876543210";
	if (c == 'X')
		base = "0123456789ABCDEF";
	hexa = ft_xbase(nbr, base);
}
