/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointerbis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:25:41 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/24 14:10:13 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

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

char	*ft_pbase(unsigned long long nbr)
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

int	putzeroes(int lenght, int cut, char *str)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += print_width(lenght, cut, 1);
	i += ft_putstr(str);
	return (i);
}
