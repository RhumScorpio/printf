/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:57:22 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/04 16:44:54 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int main()
{
	int value1;
	int value2;

	value1 = 0;
	value2 = 0;

	value1 = printf("%-u\n", 10);
	value2 = ft_printf("%-u\n", 10);
	printf("%d | %d\n", value1, value2);

	value1 = printf("%1u\n", 1000);
	value2 = ft_printf("%1u\n", 1000);
	printf("%d | %d\n", value1, value2);

	value1 = printf("%p\n", ((void*)0));
	value2 = ft_printf("%p\n", ((void*)0));
	printf("%d | %d\n", value1, value2);

   	value1 = printf("The NULL macro represents the %p address\n", ((void*)0));
   	value2 = ft_printf("The NULL macro represents the %p address\n", ((void*)0));
	printf("%d | %d\n", value1, value2);
   	
	value1 = printf("%c - - %p %d - %i - %u - %x %X %%\n", 'b', ((void*)0), 20, -20, -1, -1, 200000000);
   	value2 = ft_printf("%c - - %p %d - %i - %u - %x %X %%\n", 'b', ((void*)0), 20, -20, -1, -1, 200000000);
	printf("%d | %d\n", value1, value2);

   	value1 = printf("the address is %1p\n", (void *)0);
   	value2 = ft_printf("the address is %1p\n", (void *)0);
	printf("%d | %d\n", value1, value2);

	return (0);
}
