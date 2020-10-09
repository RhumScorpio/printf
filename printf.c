/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:47:47 by clesaffr          #+#    #+#             */
/*   Updated: 2020/10/09 17:29:53 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_printf(int first, ...)
{
	int current;
	va_list	nunom;

	va_start(nunom, first);
	printf("%d\n", first);
	
	current = -1;

	while(current != 0)
	{
		current = (int) va_arg(nunom, int);
		printf("%d\n", current);
	}
	va_end(nunom);
}

int main(void)
{
	ft_printf(1, 2, 3, 4, 5, 6, 7, 0);
}
