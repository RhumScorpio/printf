/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:26:57 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/11 17:08:29 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	int		x;
	int		nbr;
	int		pointer;
	char 	*str;
	char	c;

	str = "j4qime les mouiells";
	nbr = 42;
	x = -566;
	pointer = -42;
	c = '$';

	ft_printf("str -- %s\n", str);
	printf("r_str -- %s\n", str);
	ft_printf("int -- %d\n", nbr);
	printf("r_int -- %d\n", nbr);
	ft_printf("pointer -- %p\n", &pointer);
	printf("r_pointer -- %p\n", &pointer);
	ft_printf("char -- %c\n", c);
	printf("r_char -- %c\n", c);
	ft_printf("hexa -- %x\n", x);
	ft_printf("HEXA -- %X\n", x);
	printf("r_hexa -- %x\n", x);
	printf("r_HEXA -- %X\n", x);
	//FT_STR NE MARCHE PAS SUR LE WIDTH??
	//FT_INT IMPRIME DEUX FOIS LA STR QUAND Y A UN FLAG??
	printf("|STAR dot STAR with 20 and 6 STR|\n");
	ft_printf("%*.*s123456\n", -20, 6, str);
	printf("%*.*s123456\n", -20, 6, str);
	printf("|STAR dot STAR with -20 and 10 INT|\n");
	ft_printf("%*.*d@@@\n", -20, 10, nbr);
	printf("%*.*d@@@\n", -20, 10, nbr);
	printf("|STAR dot STAR with 20 and -10 INT|\n");
	ft_printf("%*.*d@@@\n", 20, -10, nbr);
	printf("%*.*d@@@\n", 20, -10, nbr);
	printf("|STAR FLAG->WIDTH NEGATIVE INT|\n");
	ft_printf("%*d@@@\n", -20, nbr);
	printf("%*d@@@\n", -20, nbr);
	printf("|STAR FLAG->WIDTH NEGATIVE STR|\n");
	ft_printf("%*s123456\n", -20, str);
	printf("%*s123456\n", -20, str);
	printf("|STRING with DOT=6 and WIDTH=20|\n");
	ft_printf("%20.6s123456\n", str);
	printf("%20.6s123456\n", str);
	printf("|DOT = 20 INTEGER|\n");
	ft_printf("%.20d@@@@@@\n", nbr);
	printf("%.20d@@@@@@\n", nbr);
	printf("|DOT + STAR INTEGER with star = 20|\n");
	ft_printf("%.*d@@@@@@\n", 20, nbr);
	printf("%.*d@@@@@@\n", 20, nbr);
	printf("|HEXA WIDTH = 20|\n");
	ft_printf("%20x@@@@@@\n", x);
	printf("%20x@@@@@@\n", x);
	return (0);
}
