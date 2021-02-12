/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:56:29 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/02 07:38:02 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void listing(t_indic *flag, int nbr, ...)
{
	va_list va;
	int	e;
	va_start(va, nbr);
	e = ft_int(flag, &va);
	va_end(va);
}

void	init_preset_flag(t_indic *flag, int val, ...)
{
	va_list values;

	va_start(values, val);

	flag->width = val;
	flag->zero = va_arg(values, int);
	flag->dot = va_arg(values, int);
	flag->minus = va_arg(values, int);
	flag->star = va_arg(values, int);

	va_end(values);
}

int main(void)
{
	t_indic flag;
	int example;

	example = -24; 

	printf("%014d%%\n", example);
	init_preset_flag(&flag, 14, 1, -1, 0, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');

	printf("%14.*d%%\n", -4, example);
	init_preset_flag(&flag, 14, 0, -4, 0, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');
	
	printf("%4.14d%%\n", example);
	init_preset_flag(&flag, 4, 0, 14, 0, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');

	printf("%14d%%\n", example);
	init_preset_flag(&flag, 14, 0, -1, 0, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');
	
	printf("%14.4d%%\n", example);
	init_preset_flag(&flag, 14, 0, 4, 0, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');

	printf("%-14.4d%%\n", example);
	init_preset_flag(&flag, 14, 0, 4, 1, 0);
	listing(&flag, 0, example);
	ft_putchar('%');
	ft_putchar('\n');



	return (0);
	
}
