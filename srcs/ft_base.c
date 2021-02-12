/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:52:32 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/12 12:05:02 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		len_nbr(unsigned int nbr, int len)
{
	int i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / len;
		i++;
	}
	return (i);
}

char			*ft_xbase(unsigned int nbr, char c)
{
	char	*base;
	char	*str;
	int		len;
	int		size;
	int		i;

	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
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
