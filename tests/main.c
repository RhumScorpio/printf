/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:26:57 by clesaffr          #+#    #+#             */
/*   Updated: 2021/04/30 00:46:55 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	int		x;
	int		nbr;
	int		pointer;
	char 	*str;
	int		a;
	int		b;
	int		c;
	int		d = 2147483647;
	int		e = -2147483648;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	str = "j4qime les mouiells";
	nbr = 42;
	x = -566;
	pointer = -42;
	c = '\0';
	a = 0;
	b = 0;

a = printf("%-2d\n", NULL);
b = ft_printf("%-2d\n", NULL);
printf("%d | %d\n", a, b);


a = printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);
b = ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);
printf("%d | %d\n", a, b);

a = printf("%05.*d\n", -5, 15);
b = ft_printf("%05.*d\n", -5, 15);
printf("%d | %d\n", a, b);

a = printf("%0*d@\n", -5, 15);
b = ft_printf("%0*d@\n", -5, 15);
printf("%d | %d\n", a, b);

/*	a = ft_printf("%s\n", str);
	b = printf("%s\n", str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%d\n", nbr);
	b = printf("%d\n", nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%p\n", &pointer);
	b = printf("%p\n", &pointer);
	printf("%d | %d\n", a, b);
	a = ft_printf("%c\n", c);
	b = printf("%c\n", c);
	printf("%d | %d\n", a, b);
	a = ft_printf("%x\n", x);
	b = printf("%x\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%X\n", x);
	b = printf("%X\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*s123456\n", -20, 6, str);
	b = printf("%*.*s123456\n", -20, 6, str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*d@@@\n", -20, 10, nbr);
	b = printf("%*.*d@@@\n", -20, 10, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*d@@@\n", 20, -10, nbr);
	b = printf("%*.*d@@@\n", 20, -10, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*d@@@\n", -20, nbr);
	b = printf("%*d@@@\n", -20, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*s123456\n", -20, str);
	b = printf("%*s123456\n", -20, str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%20.6s123456\n", str);
	b = printf("%20.6s123456\n", str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%.20d@@@@@@\n", nbr);
	b = printf("%.20d@@@@@@\n", nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%.*d@@@@@@\n", 20, nbr);
	b = printf("%.*d@@@@@@\n", 20, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%20x@@@@@@\n", x);
	b = printf("%20x@@@@@@\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%10%\n");
	b = printf("%10%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%05%\n");
	b = printf("%05%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%-10%\n");
	b = printf("%-10%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%%\n");
	b = printf("%%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%10.5%\n");
	b = printf("%10.5%\n");
	printf("%d | %d\n", a, b);

	a = ft_printf("%d%d%d%d%d%d\n", 1, 2, 3, 4, 5, 6);
	b = printf("%d%d%d%d%d%d\n", 1, 2, 3, 4, 5, 6);
	printf("%d | %d\n", a, b);

	a = ft_printf("%c%c%c%c%c%c%c\n", 'e', 'n', 'c', 'u', 'l', 'e', 'r');
	b = printf("%c%c%c%c%c%c%c\n", 'e', 'n', 'c', 'u', 'l', 'e', 'r');
	printf("%d | %d\n", a, b);

	a = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j);
	b = printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j);
	printf("%d | %d\n", a, b);

	a = ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);
	b = printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d);
	printf("%d | %d\n", a, b);

	a = ft_printf("%0i, %0d, %0d, %0d\n", i, j, k, l);
	b = printf("%0i, %0d, %0d, %0d\n", i, j, k, l);
	printf("%d | %d\n", a, b);*/
	return (0);
}
