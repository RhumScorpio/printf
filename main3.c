/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:18:05 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 14:10:23 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	char *test;
	t_indic flag;

	printf("valeur de flag->width == %d\n", flag.width);
	flag = init_indic_flag(&flag);
	flag = parsing_digits('0', &flag);
	printf("valeur de flag->zero == %d\n", flag.zero);
	flag = parsing_digits('6', &flag);
	flag = parsing_digits('0', &flag);
	printf("valeur de flag->width == %d\n", flag.width);
	flag = parsing_digits('1', &flag);
	flag = parsing_digits('5', &flag);
	flag = parsing_digits('9', &flag);
	flag = parsing_digits('6', &flag);
	printf("valeur de flag->width == %d\n", flag.width);
	flag = *(init_indic_flag(&flag));
	flag = dotflag(&flag);
	flag = starflag(&flag);
	flag = minusflag(&flag);
	printf("valeur de flag->dot == %d\n", flag.dot);
	printf("valeur de flag->star == %d\n", flag.star);
	printf("valeur de flag->minus == %d\n", flag.minus);
	
	test = "ifallz";
	print_width(8, 4, 1);
	ft_putchar('\n');
	printf("%s\n", ft_itoa(-2147483648));
	print_cut(test, 3);
	return (0);
}
