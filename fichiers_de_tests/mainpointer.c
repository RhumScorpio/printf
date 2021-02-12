/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 11:35:31 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 16:12:31 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_pbase(unsigned long long nbr, char *base);

int main(void)
{
	int a;
	char e;
	int i;
	char *f;
	int	g;

	f = "lol";
	a = 899;
	i = 0;
	e = '%';
	g = 42;

	printf("%4d pointer %p\n", a, &a);
	printf("%4c pointer %p\n", e, &e);
	printf("%4d pointer %p\n", i, &i);
	printf("%4s pointer %p\n", f, f);
	printf("%4d pointer %p\n", g, &g);

	char *base;
	char *str;
	unsigned long long test;

	base = "0123456789abcdef";
	test = (unsigned long long)&a;
	str = ft_pbase(test, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);

	test = (unsigned long long)&e;
	str = ft_pbase(test, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);

	test = (unsigned long long)&i;
	str = ft_pbase(test, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);

	test = (unsigned long long)f;
	str = ft_pbase(test, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);

	test = (unsigned long long)&g;
	str = ft_pbase(test, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);
	
		return (0);
}
