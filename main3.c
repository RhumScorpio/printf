/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:18:05 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 17:13:28 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	char *test;
	t_indic flag;

	printf("valeur de flag->width == %d\n", flag.width);
	flag = init_indic_flag(&flag);
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
	flag = init_indic_flag(&flag);
	dotflag(&flag);
	starflag(&flag);
	minusflag(&flag);
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
