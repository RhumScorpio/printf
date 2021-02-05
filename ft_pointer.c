/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:28:01 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 17:15:24 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		len_nbr(unsigned long long nbr, int len)
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

char	*ft_pbase(unsigned long long nbr, char *base)
{
	char	*str;
	int 	len;
	int		size;
	int		i;

	len = ft_strlen(base);
	size = len_nbr(nbr, len);
	printf("SIZE --- %d\n", size);
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

int		ft_pointer(t_indic *flag, va_list *va)
{
	unsigned long long  address;
	char *base;
	char *str;

	base = "0123456789abcdef";
	address = va_arg(*va, unsigned long long);
	str = ft_pbase(address, base);
	printf("STR --- %s\n", str);
	if (flag->minus)
	{
		ft_putstr("0x");
		ft_putstr(str);
		print_width(flag->width, ft_strlen(str) + 2, 0);
		free(str);
		return (0);
	}
	if (flag->zero)
	{
		ft_putstr("0x");
		print_width(flag->width, ft_strlen(str) + 2, 1);
		ft_putstr(str);
		free(str);
		return (0);
	}
	print_width(flag->width, ft_strlen(str) + 2, 0);
	ft_putstr("0x");
	ft_putstr(str);
	free(str);
	return (0);
}
