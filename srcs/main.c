/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:26:57 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/05 16:44:17 by clesaffr         ###   ########.fr       */
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
	int	a;
	int b;

	str = "j4qime les mouiells";
	nbr = 42;
	x = -566;
	pointer = -42;
	c = '\0';
	a = 0;
	b = 0;

	a = ft_printf("%s\n", str);
	b = printf("%s\n", str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%d\n", nbr);
	b = printf("%d\n", nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%p\n", &pointer);
	b = printf("%p\n", &pointer);
	printf("%d | %d\n", a, b);
	a = ft_printf("%c\n", c);
	b = printf("%c\n", c);
	printf("%d | %d\n", a, b);
	a = ft_printf("%x\n", x);
	b = printf("%x\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%X\n", x);
	b = printf("%X\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*s123456\n", -20, 6, str);
	b = printf("%*.*s123456\n", -20, 6, str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*d@@@\n", -20, 10, nbr);
	b = printf("%*.*d@@@\n", -20, 10, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*.*d@@@\n", 20, -10, nbr);
	b = printf("%*.*d@@@\n", 20, -10, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*d@@@\n", -20, nbr);
	b = printf("%*d@@@\n", -20, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%*s123456\n", -20, str);
	b = printf("%*s123456\n", -20, str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%20.6s123456\n", str);
	b = printf("%20.6s123456\n", str);
	printf("%d | %d\n", a, b);
	a = ft_printf("%.20d@@@@@@\n", nbr);
	b = printf("%.20d@@@@@@\n", nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%.*d@@@@@@\n", 20, nbr);
	b = printf("%.*d@@@@@@\n", 20, nbr);
	printf("%d | %d\n", a, b);
	a = ft_printf("%20x@@@@@@\n", x);
	b = printf("%20x@@@@@@\n", x);
	printf("%d | %d\n", a, b);
	a = ft_printf("%10%\n");
	b = printf("%10%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%05%\n");
	b = printf("%05%\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%-10%d\n");
	b = printf("%-10%d\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%.15%o\n");
	b = printf("%.15%o\n");
	printf("%d | %d\n", a, b);
	a = ft_printf("%10.5%\n");
	b = printf("%10.5%\n");
	printf("%d | %d\n", a, b);
	return (0);
}
