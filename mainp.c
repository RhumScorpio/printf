/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:51:17 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 16:39:36 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
void		pstring(int zero, int width, int dot, int minus, char *str, ...)
{
	va_list va;
	t_indic flag;

	init_indic_flag(&flag);
	flag.zero = zero;
	flag.width = width;
	flag.dot = dot;
	flag.minus = minus;

	va_start(va, str);
	printf("%s\n", str);

	ft_pointer(&flag, &va);

	va_end(va);
}

int main(void)
{
	int a;
	char e;
	int i;
	char *f;
	int	g;

	f = "lol";
	a = 899;
	i = 0;
	e = '%';
	g = 42;

	pstring(0, 0, 6, 0, "-------------------", &g);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%.6p%%\n", &g);
	pstring(0, 20, -1, 1, "-------------------", &a);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-20.5p%%\n", &a);
	pstring(0, 20, 5, 0, "-------------------", &e);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20.5p%%\n", &e);
	pstring(1, 20, -1, 0, "-------------------", &i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%020p%%\n", &i);
	pstring(0, 20, 5, 0, "-------------------", f);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20.5p%%\n", f);
}
