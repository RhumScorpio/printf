/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:10:58 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 10:25:09 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*(str + c) != '\0')
	{
		c++;
	}
	return (c);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}

void	putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

static	int		len(long nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char *str;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	while (*(src + len) != '\0')
		++len;
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (*(src + i) != '\0')
	{
		str[i] = src[i];
		++i;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	int		size;
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	size = ft_strlen(dest) + ft_strlen(src);
	tmp = malloc(sizeof(char) * size + 1);
	while (dest[j])
	{
		tmp[j] = dest[j];
		++j;
	}
	while (src[i] && (i + j) < size)
	{
		tmp[j + i] = src[i];
		i++;
	}
	tmp[i + j] = '\0';
	return (tmp);
}
