/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:47:47 by clesaffr          #+#    #+#             */
/*   Updated: 2020/10/09 17:58:36 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	ft_printnunom(int first, ...)
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

void	ft_printf(const	char *first, ...)
{
	char *current;
	va_list argument;

	current = NULL;
	va_start(argument, first);
	current = (char *)first;

	while(current != NULL)
	{
		printf("%s\n", current);
		current = (char *)va_arg(argument, char*);
	}
	va_end(argument);
}

int main(void)
{
	ft_printnunom(1, 2, 3, 4, 5, 6, 7, 0);
	ft_printf("bonjour", "tout", "le", "monde", NULL);
}
