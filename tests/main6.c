/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:42:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/23 22:27:11 by clesaffr         ###   ########.fr       */
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

		value1 = 0;
		value2 = 0;

		a = -1;
		b = -1;
		value1 = printf("%*.*X, %*.*x\n", 10, b, l, a, b, l);
		value2 = ft_printf("%*.*X, %*.*x\n", 10, b, l, a, b, l);
		printf("T1/%d | %d\n", value1, value2);

		a = 0;
		b = -1;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T2/%d | %d\n", value1, value2);

		a = 1;
		b = -1;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T3/%d | %d\n", value1, value2);


		a = 1;
		b = 0;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T4/%d | %d\n", value1, value2);


		a = 2;
		b = 0;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T5/%d | %d\n", value1, value2);

		a = 2;
		b = 1;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T6/%d | %d\n", value1, value2);

		a = 3;
		b = -1;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T7/%d | %d\n", value1, value2);

		a = 3;
		b = 0;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T8/%d | %d\n", value1, value2);

		a = 3;
		b = 1;
		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("T9/%d | %d\n", value1, value2);

		value1 = printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347
		value2 = ft_printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347
		printf("T10/%d | %d\n", value1, value2);


		return(0);
}
