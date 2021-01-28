/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:56:29 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/28 12:29:02 by clesaffr         ###   ########.fr       */
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

int main(void)
{
	t_indic flag;
	init_indic_flag(&flag);
	flag.zero = 1;
	flag.width = 12;
	listing(&flag, 12, -23, 80, -42);
	ft_putchar('\n');
	init_indic_flag(&flag);
	flag.dot = 12;
	listing(&flag, 12, -42);
	return (0);
	
}
