/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:18:05 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/27 11:09:53 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	listing(t_indic *flag, const char *str, ...)
{
	int arg;
	int c_count;
	va_list va;
	va_start(va, str);
	
	starflag(&va, flag);
	printf("valeur de flag->dot == %d\n", flag->dot);
	printf("valeur de flag->star == %d\n", flag->star);
    init_indic_flag(flag);
	starflag(&va, flag);
	printf("valeur de flag->width == %d\n", flag->width);
	printf("valeur de flag->star == %d\n", flag->star);
	//arg = va_arg(va, int);
	//printf("ARGS1 -- %d\n", arg);
	//arg = va_arg(va, int);
	//printf("ARGS2 -- %d\n", arg);
	va_end(va);
}

int	main(void)
{

	char *test;
	const char *s;
	int c_count;
	t_indic flag;

	printf("valeur de flag->width == %d\n", flag.width);
	printf("INIT\n");
	init_indic_flag(&flag);
	parsing_digits('0', &flag);
	printf("valeur de flag->zero == %d\n", flag.zero);
	parsing_digits('6', &flag);
	parsing_digits('0', &flag);
	printf("valeur de flag->width == %d\n", flag.width);
	parsing_digits('1', &flag);
	parsing_digits('5', &flag);
	parsing_digits('9', &flag);
	parsing_digits('6', &flag);
	printf("valeur de flag->width == %d\n", flag.width);
	printf("INIT\n");
	init_indic_flag(&flag);
	s = ".*1942420";
	c_count = 0;
	c_count = dotflag(s, 0, &flag);
	minusflag(&flag);
	printf("valeur de flag->dot == %d\n", flag.dot);
	printf("valeur de flag->star == %d\n", flag.star);
	printf("valeur de flag->minus == %d\n", flag.minus);
	printf("INIT\n");
	init_indic_flag(&flag);
	printf("valeur de flag->dot == %d\n", flag.dot);
	s = ".2345198*777";
	c_count = 0;
	c_count = dotflag(s, 0, &flag);
	printf("valeur de flag->dot == %d\n", flag.dot);
	printf("valeur de c_count == %d\n", c_count);
	printf("INIT\n");
	init_indic_flag(&flag);
	printf("valeur de flag->star == %d\n", flag.star);
	s = ".*1942420";
	c_count = 0;
	c_count = dotflag(s, 0, &flag);
	printf("valeur de flag->dot == %d\n", flag.dot);
	listing(&flag,".*", 12, 67);

	test = "ifallz";
	print_width(8, 4, 1);
	ft_putchar('\n');
	printf("%s\n", ft_itoa(-2147483648));
	print_cut(test, 3);
	return (0);
}
