/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:49:54 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/24 14:14:54 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/printf.h"

int		main(void)
{
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

		int value1;
		int	value2;

		value1 = 0;
		value2 = 0;

		printf("%s\n", ft_itoa(e));

		value1 = printf("%d\n", e);
		value2 = ft_printf("%d\n", e);

		value1 = printf("%...----d\n", j);
		value2 = ft_printf("%...----d\n", j);
		printf("%d | %d\n", value1, value2);
		
		value1 = printf("%.----d\n", j);
		value2 = ft_printf("%.----d\n", j);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%.10p\n", *p);
		value2 = ft_printf("%.10p\n", *p);
		printf("%d | %d\n", value1, value2);
		
		value1 = printf("%-0.10p\n", *p);
		value2 = ft_printf("%-0.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%0000.10p\n", *p);
		value2 = ft_printf("%0000.10p\n", *p);
		printf("%d | %d\n", value1, value2);
		
		value1 = printf("%0000-.10p\n", *p);
		value2 = ft_printf("%0000-.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%0000--.10p\n", *p);
		value2 = ft_printf("%0000--.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%0---.*p\n", -5, *p);
		value2 = ft_printf("%0---.*p\n", -5, *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%0---.*p\n", 5, *p);
		value2 = ft_printf("%0---.*p\n", 5, *p);
		printf("%d | %d\n", value1, value2);
		
		value1 = printf("%0---.10p\n", *p);
		value2 = ft_printf("%0---.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("**%0*.*p\n", -6, -10, *p);
		value2 = ft_printf("**%0*.*p\n", -6, -10,*p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("**%0*p\n", -10, *p);
		value2 = ft_printf("**%0*p\n", -10,*p);
		printf("%d | %d\n", value1, value2);
		
		value1 = printf("%015.10p\n", *p);
		value2 = ft_printf("%015.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("-10%-15.*p\n", -10, *p);
		value2 = ft_printf("-10%-15.*p\n", -10, *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%.*p\n", *p, -0);
		value2 = ft_printf("%.*p\n", *p, -0);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%-15.10p\n", *p);
		value2 = ft_printf("%-15.10p\n", *p);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%.0-0d\n", j);
		value2 = ft_printf("%.0-0d\n", j);
		printf("%d | %d\n", value1, value2);

		value1 = printf("%780\n", j);
		value2 = ft_printf("%780\n", j);
		printf("%d | %d\n", value1, value2);

		return (0);
}
