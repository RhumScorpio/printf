/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:46:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 12:09:08 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_xbase(int nbr, char *base);
int		ft_hexa(char c, t_indic *flag, va_list *va);
int		len_nbr(int nbr);
char	*ft_strcat(char *dest, char *src);

void		hstring(char c, int zero, int width, int dot, int minus, char *str, ...)
{
	va_list va;
	t_indic flag;

	init_indic_flag(&flag);
	flag.zero = zero;
	flag.width = width;
	flag.dot = dot;
	flag.minus = minus;

	va_start(va, str);
	printf("%s\n", str);

	ft_hexa(c, &flag, &va);

	va_end(va);
}

int main(int ac, char **av)
{
	char *str;
	char *base;
	char *base2;
	char *new;
	char c;
	int i;
	unsigned int test;

	if (ac == 1)
	{
		printf("ENTER A NUMBER SHITHEAD");
		return (0);
	}
	i = atoi(av[1]);
	test = (unsigned int)i;
	base2 = "0123456789abcdef";
	str = ft_xbase(i, base2);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('\n');
	free(str);
	printf("real -- %x\n", i);
	new = ft_xbase(i, base2);
	ft_putstr(new);
	ft_putchar('\n');
	free(new);
	printf("real -- %x\n", i);

	c = 'x';
	printf("____________________________\n");
	hstring(c, 0, 20, -1, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20x%%\n", i);
	hstring(c, 0, 20, 6, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%20.6x%%\n", i);
	hstring(c, 1, 20, -1, 0, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%020x%%\n", i);
	hstring(c, 0, 20, -1, 1, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-20x%%\n", i);
	hstring(c, 0, 8, -1, 1, "-------------------", i);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-8x%%\n", i);

	return (0);
}
