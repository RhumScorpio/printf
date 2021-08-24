/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:05:40 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/06 11:18:15 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int main()
{
	int value1 = 0;
	int value2 = 0;
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

value1 = printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
value2 = ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
printf("12/ %d | %d\n", value1, value2);

value1 = printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
value2 = ft_printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
printf("13/ %d | %d\n", value1, value2);


value1 = printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d); //T14
value2 = ft_printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d); //T14
printf("14/ %d | %d\n", value1, value2);

value1 = printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //T2
value2 = ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //T2
printf("2/ %d | %d\n", value1, value2);
value1 =  printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d%\n", i, j, k, l, m, c, e, d); //T3
value2 =  ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d%\n", i, j, k, l, m, c, e, d); //T3
printf("3/ %d | %d\n", value1, value2);
value1 = printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
value2 = ft_printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
printf("4/ %d | %d\n", value1, value2);

value1 = printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);
value2 = ft_printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);
printf("XX/ %d | %d\n", value1, value2);


value1 = printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d); //T17
value2 = ft_printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d); //T17
printf("17/ %d | %d\n", value1, value2);

value1 = printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d); //T18
value2 = ft_printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d); //T18
printf("18/ %d | %d\n", value1, value2);
value1 = printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
value2 = ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
printf("20/ %d | %d\n", value1, value2);
value1 = printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d); //T21
value1 = printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d); //T21
printf("21/ %d | %d\n", value1, value2);

value1 = printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
value2 = ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
printf("24/ %d | %d\n", value1, value2);
value1 = printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
value2 = ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
printf("25/ %d | %d\n", value1, value2);
value1 = printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T26
value2 = ft_printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T26
printf("26/ %d | %d\n", value1, value2);
value1 = printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d); //T27
value2 = ft_printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d); //T27
printf("27/ %d | %d\n", value1, value2);
value1 = printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d%\n", i, j, k, l, m, c, e, d); //T28
value2 = ft_printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d%\n", i, j, k, l, m, c, e, d); //T28
printf("28/ %d | %d\n", value1, value2);
value1 = printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
value2 = ft_printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
printf("29/ %d | %d\n", value1, value2);
value1 = printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
value2 = ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
printf("30/ %d | %d\n", value1, value2);
value1 = printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d); //T31
value2 = ft_printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d); //T31
printf("31/ %d | %d\n", value1, value2);
value1 = printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
value2 = ft_printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
printf("32/ %d | %d\n", value1, value2);
value1 = printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
value2 = ft_printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
printf("33/ %d | %d\n", value1, value2);

return (0);
}
