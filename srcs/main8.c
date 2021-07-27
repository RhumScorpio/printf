/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:42:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/26 17:58:26 by clesaffr         ###   ########.fr       */
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
		a = f;
		b = g;
		value1 = printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
		value2 = ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
		value2 = ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		value2 = ft_printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		value2 = ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
		printf("%d | %d\n", value1, value2);

		a = 12;
		b = 18;
		value1 = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
		value2 = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
		value2 = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
		value2 = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
		value2 = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%%, \t, \\, \", \', +\n");
		value2 = ft_printf("%%, \t, \\, \", \', +\n");
		printf("%d | %d\n", value1, value2);
		value1 = printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
		value2 = ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p, r, r, i, r, i, r, i);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i);
		value2 = ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, i, a, i, a, i, a, i, a, i);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j);
		value2 = ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, j, a, j, a, j, a, j, a, j);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l);
		value2 = ft_printf("%-00000-----*i, %---0.*d, %0-0-0-0-0.*d, %-0-0-0-0-.*d, %-----.*d\n", a, l, a, l, a, l, a, l, a, l);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
		value2 = ft_printf("%i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
		value2 = ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
		value2 = ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
		value2 = ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
		printf("%d | %d\n", value1, value2);
		// ^ Theoriquement un comportement indefini mais testé par la moulinette
		value1 = printf("(null)\n");
		value2 = ft_printf("(null)\n");
		printf("%d | %d\n", value1, value2);
		value1 = printf("");
		value2 = ft_printf("");
		printf("%d | %d\n", value1, value2);

		return(0);
}
