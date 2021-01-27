/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:35:44 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/27 17:15:45 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	char *str;

	str = ft_itoa(-12);
	ft_putstr(str);
	ft_putchar('\n');

	printf("%.10d\n", 5);
	print_width(10, 1, 1);
	ft_putstr("5\n");

	printf("%010d\n", 5);
	print_width(10, 1, 1);
	ft_putstr("5\n");

	printf("%-10d\n", 5);
	ft_putstr("5");
	print_width(10, 1, 0);
	ft_putchar('\n');
	
	printf("%.10d\n", -5);
	ft_putchar('-');
	print_width(10, 1, 1);
	ft_putstr("5\n");

	printf("%010d\n", -5);
	ft_putchar('-');
	int a;
	a = 10;
	print_width(--a, 1, 1);
	ft_putstr("5\n");

	printf("%-10d\n", -5);
	ft_putstr("-5");
	print_width(10, 1, 0);
	ft_putchar('\n');

}
