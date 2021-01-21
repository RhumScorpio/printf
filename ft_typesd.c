/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typesd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:15:36 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/21 08:12:18 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_typesd.h"

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

int		len(long nb)
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

int	main(void)
{
	char *number;
	int	minus;


	minus = 0;
	printf("%.10d|\n", 666);
	if (666 < 0)
		minus = 1;
	number = ft_itoa(666);
	if (minus == 1)
		ft_putchar('-');
	putzero(10 - ft_strlen(number) + minus);
	ft_putstr(number + minus);
	printf("|\n");


	minus = 0;
	printf("%.10d|\n", -666);
	if (-666 < 0)
		minus = 1;
	number = ft_itoa(-666);
	if (minus == 1)
		ft_putchar('-');
	putzero(10 - ft_strlen(number) + minus);
	ft_putstr(number + minus);
	printf("|\n");

	printf("%-10d|\n", -666);
	number = ft_itoa(-666);
	ft_putstr(number);
	putspace(10 - ft_strlen(number));
	printf("|\n");

	printf("%10d|\n", -666);
	number = ft_itoa(-666);
	putspace(10 - ft_strlen(number));
	ft_putstr(number);
	printf("|\n");

	minus = 0;
	printf("%010d|\n", -666);
	if (-666 < 0)
		minus = 1;
	number = ft_itoa(-666);
	if (minus == 1)
		ft_putchar('-');
	putzero(10 - ft_strlen(number));
	ft_putstr(number + minus);
	printf("|\n");

	return (0);
}







