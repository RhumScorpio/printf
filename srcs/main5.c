/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:42:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/28 23:07:43 by clesaffr         ###   ########.fr       */
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

/*		value1 = printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		value2 = ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%d | %d\n", value1, value2);

		a = 4;
		b = -1;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);
		b++;

		a = 4;
		b = 4;
		value1 = printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);


		a = 4;
		b = 3;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = 4;
		b = 2;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = 4;
		b = 0;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = 3;
		b = 2;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	

		a = 3;
		b = 1;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = 2;
		b = 1;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	

		a = -1;
		b = 3;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = -1;
		b = 2;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	


		a = -1;
		b = 4;
		value1 = printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);	

		a = -1;
		b = 0;
		value1 = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		value2 = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		printf("%d | %d\n", value1, value2);
		
		a = 4;
		b = 3;
		value1 = printf("%0*.*x, %0*.*x, %0*.*X\n", 10, b, i, a, b, i, a, b, i);
		value2 = ft_printf("%0*.*x, %0*.*x, %0*.*X\n", 10, b, i, a, b, i, a, b, i);
		printf("%d | %d\n", value1, value2);
 	
		value1 = printf("%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		value2 = ft_printf("%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		value2 = ft_printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		printf("%d | %d\n", value1, value2);

		a = 4;
		b = 4;
		printf("%d | %d\n", value1, value2);
		value1 = printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		value2 = ft_printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
		printf("%d | %d\n", value1, value2);

		a = -1;
		b = -1;

		value1 = printf("%*.*X, %*.*u\n", 10, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*X, %*.*u\n", 10, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);

		a = 0;
		b = -1;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);

		a = 1;
		b = -1;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);


		a = 1;
		b = 0;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);


		a = 2;
		b = 0;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);

		a = 2;
		b = 1;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);

		printf("%d | %d\n", value1, value2);

		a = 3;
		b = -1;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);

		a = 3;
		b = 0;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);

		printf("%d | %d\n", value1, value2);

		a = 3;
		b = 1;

		value1 = printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		value2 = ft_printf("%*.*x, %*.*X, %0*.*x, %0*.*X, %-*.*x, %-*.*X\n", a, b, l, a, b, l, a, b, l, a, b, l, a, b, l, a, b, l);
		printf("%d | %d\n", value1, value2);


*/
		int jio = 257;
		a = -1;
		while(a < 5) //T257-346
		{
				b = -1;
				while (b < 5)
				{
						printf("A{ %d }, B{ %d }__________________________\n", a, b);
						value1 = printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						value2 = ft_printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						printf("IT IS TEST NUMBER %d\n", jio++);
						printf("%d | %d\n", value1, value2);
						value1 = printf("%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						value2 = ft_printf("%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						printf("IT IS TEST NUMBER %d\n", jio++);
						printf("%d | %d\n", value1, value2);
						value1 = printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						value2 = ft_printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
						printf("IT IS TEST NUMBER %d\n", jio++);
						printf("%d | %d\n", value1, value2);
						b++;
				}
				a++;
		}
		value1 = printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347
		value2 = ft_printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0); //T347
		printf("%d | %d\n", value1, value2);


		return(0);
}
