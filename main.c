/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:26:57 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/12 11:41:18 by clesaffr         ###   ########.fr       */
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

	ft_printf("%s\n", str);
	printf("%s\n", str);
	ft_printf("%d\n", nbr);
	printf("%d\n", nbr);
	ft_printf("%p\n", &pointer);
	printf("%p\n", &pointer);
	ft_printf("%c\n", c);
	printf("%c\n", c);
	ft_printf("%x\n", x);
	ft_printf("%X\n", x);
	printf("%x\n", x);
	printf("%X\n", x);
	ft_printf("%*.*s123456\n", -20, 6, str);
	printf("%*.*s123456\n", -20, 6, str);
	ft_printf("%*.*d@@@\n", -20, 10, nbr);
	printf("%*.*d@@@\n", -20, 10, nbr);
	ft_printf("%*.*d@@@\n", 20, -10, nbr);
	printf("%*.*d@@@\n", 20, -10, nbr);
	ft_printf("%*d@@@\n", -20, nbr);
	printf("%*d@@@\n", -20, nbr);
	ft_printf("%*s123456\n", -20, str);
	printf("%*s123456\n", -20, str);
	ft_printf("%20.6s123456\n", str);
	printf("%20.6s123456\n", str);
	ft_printf("%.20d@@@@@@\n", nbr);
	printf("%.20d@@@@@@\n", nbr);
	ft_printf("%.*d@@@@@@\n", 20, nbr);
	printf("%.*d@@@@@@\n", 20, nbr);
	ft_printf("%20x@@@@@@\n", x);
	printf("%20x@@@@@@\n", x);
	printf("||\n");
	printf("||\n");
	printf("||\n");
	printf("||\n");
	printf("||\n");
	return (0);
}
