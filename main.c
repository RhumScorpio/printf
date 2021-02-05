/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:26:57 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 14:50:12 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
	int		nbr;
	int		pointer;
	char 	*str;
	char	c;

	str = "j4qime les mouiells";
	nbr = 12332;
	pointer = -42;
	c = '$';

	ft_printf("str -- %s\n", str);
	printf("str -- %s\n", str);
	ft_printf("int -- %d\n", nbr);
	printf("int -- %d\n", nbr);
	ft_printf("pointer -- %p\n", &pointer);
	printf("pointer -- %p\n", &pointer);
	ft_printf("char -- %c\n", c);
	printf("char -- %c\n", c);
	return (0);
}
