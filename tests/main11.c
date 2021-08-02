/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:42:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/30 12:20:09 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
		int		a = 0;
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

		int value1;
		int	value2;
		int number;

		value1 = 0;
		value2 = 0;

		a = 19;
		b = 14;
		value1 = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42); //T178
		value2 = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42); //T178
		printf("%d | %d\n", value1, value2);
		value1 = printf("%12.12i, %12.12d\n", -42, 42); //T179
		value2 = ft_printf("%12.12i, %12.12d\n", -42, 42); //T179
		printf("%d | %d\n", value1, value2);
		value1 = printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
		value2 = ft_printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
		printf("%d | %d\n", value1, value2);
		value1 = printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
		value2 = ft_printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
		printf("%d | %d\n", value1, value2);
		value1 = printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
		value2 = ft_printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
		printf("%d | %d\n", value1, value2);
		value1 = printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
		value2 = ft_printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
		printf("%d | %d\n", value1, value2);
		value1 = printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
		value2 = ft_printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
		printf("%d | %d\n", value1, value2);
		value1 = printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
		value2 = ft_printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
		printf("%d | %d\n", value1, value2);
		value1 = printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
		value2 = ft_printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
		printf("%d | %d\n", value1, value2);
		value1 = printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
		value2 = ft_printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
		printf("%d | %d\n", value1, value2);
		value1 = printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
		value2 = ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
		printf("%d | %d\n", value1, value2);
		a = -4;
		while (a < 5) //T187-213
		{
				printf("*s-----------\n");
				value1 = printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				value2 = ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				printf("%d | %d\n", value1, value2);
				printf("-*s-----------\n");
				value1 = printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				value2 = ft_printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				printf("%d | %d\n", value1, value2);
				printf(".*s----------\n");
				value1 = printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				value2 = ft_printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
				printf("%d | %d\n", value1, value2);
				a++;
		}
		a = -2;
		while(a < 5) //T70-177
		{
				b = -2;
				while (b < 5)
				{
						printf("*.*s---------\n");
						value1 = printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
						value2 = ft_printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
						printf("%d | %d\n", value1, value2);
						printf("-*.*s---------\n");
						value1 = printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
						value2 = ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
						printf("%d | %d\n", value1, value2);
						b++;
				}
				a++;
		}

		value1 = printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
		value2 = ft_printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
		printf("%d | %d\n", value1, value2);
		return(0);
}
