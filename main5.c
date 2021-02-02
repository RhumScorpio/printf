/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:56:29 by clesaffr          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/01/27 18:50:19 by clesaffr         ###   ########.fr       */
=======
/*   Updated: 2021/01/28 12:29:02 by clesaffr         ###   ########.fr       */
>>>>>>> 6d6a439255ca9795291525b17c35b06ebcce8164
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
	flag.width = 12;//checker negatif
	listing(&flag, 0, -23, 80, -42);//tester avec une valeur NULL // voir comment char c s'affiche
	ft_putchar('\n');
	init_indic_flag(&flag);//test avec des sets inities a une autre valeur
	flag.dot = 12;//checker negatif
	listing(&flag, 0, -42);
	return (0);
	
}
