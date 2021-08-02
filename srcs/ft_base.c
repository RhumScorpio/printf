/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:52:32 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 01:10:32 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	len_nbr(unsigned int nbr, int len)
{
	int	i;

	i = 0;
	if (!nbr)
		return (1);
	while (nbr)
	{
		nbr = nbr / len;
		i++;
	}
	return (i);
}

static	char	*hexa_char(char c)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	return (base);
}

char	*ft_xbase(unsigned int nbr, char c)
{
	char	*base;
	char	*str;
	int		size;
	int		i;

	base = hexa_char(c);
	size = len_nbr(nbr, 16);
	str = malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	if (!nbr)
	{
		str[0] = '0';
		return (str);
	}
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
