/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:20:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/02 16:20:45 by clesaffr         ###   ########.fr       */
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

void	ft_hexa(char c, t_indic *flag, va_list *va)
{
	char	*base;
	char	*hexa;
	int		nb;
	unsigned int		nbr;

	nb = va_arg(*va, int);
	if (nb < 0)
		flag->negative = 1;
	nbr = (unsigned int)nb;
	if (c == 'x' && flag->negative)
		base = "fedcba9876543210";
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X' && flag->negative)
		base = "FEDCBA9876543210";
	if (c == 'X')
		base = "0123456789ABCDEF";
	hexa = ft_xbase(nbr, base);
	//GESTION DES FLAGS
}
