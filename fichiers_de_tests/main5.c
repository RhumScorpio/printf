/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:56:29 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 14:11:09 by clesaffr         ###   ########.fr       */
/*   Updated: 2021/01/28 12:29:02 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
void		istring(int zero, int width, int dot, int minus, char *str, ...)
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

	ft_int(&flag, &va);

	va_end(va);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		printf("ENTER A NUMBER BITCH");
		return (0);
	}
	i = atoi(av[1]);
	istring(0, 20, 6, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20.6d%%\n", i);
	istring(0, 20, -1, 1, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-20d%%\n", i);
	istring(1, 20, -1, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%020d%%\n", i);
	istring(0, 20, -1, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20d%%\n", i);
	istring(0, 20, 1, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20.1d%%\n", i);
	istring(0, 10, 5, 1, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-010.5d%%\n", i);
	return (0);
}
