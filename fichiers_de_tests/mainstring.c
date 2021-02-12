/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:16:46 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/05 11:37:47 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_string(t_indic *flag, va_list *va);
int		ft_char(t_indic *flag, va_list *va);

void		cstring(int zero, int width, int dot, int minus, char *str, ...)
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

	ft_char(&flag, &va);

	va_end(va);
}

void		string(int width, int dot, int minus, char *str, ...)
{
	va_list va;
	t_indic flag;

	init_indic_flag(&flag);
	flag.width = width;
	flag.dot = dot;
	flag.minus = minus;

	va_start(va, str);
	printf("%s\n", str);

	ft_string(&flag, &va);

	va_end(va);
}

int main(void)
{
	char *str;
	char c;

	c = 'a';
	str = "iroiqoheoihe";
	string(20, 6, 0, "-------------------", str);
	ft_putchar('\n');
	printf("%20.6s\n", str);
	string(20, -1, 0, "-------------------", str);
	ft_putchar('\n');
	printf("%20s\n", str);	
	string(20, -1, 1, "-------------------", str);
	ft_putchar('\n');
	printf("%-20s\n", str);

	string(6, 3, 1, "-------------------", str);
	ft_putchar('\n');
	printf("%-6.3s\n", str);

	string(0, -1, 0, "-------------------", str);
	ft_putchar('\n');
	printf("%0s\n", str);

	string(0, 0, 0, "-------------------", str);
	ft_putchar('\n');
	printf("%.0s\n", str);

	string(0, -1, 0, "-------------------", str);
	ft_putchar('\n');
	printf("%-0s\n", str);

	printf("______________________________\n");

	cstring(1, 3, -1, 0, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%03c%%\n", c);

	cstring(1, 10, -1, 0, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%010c%%\n", c);

	cstring(0, 10, 3, 0, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%10.3c%%\n", c);

	cstring(0, 0, 6, 0, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%.6c%%\n", c);

	cstring(0, 3, -1, 1, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-03c%%\n", c);

	cstring(0, 10, -1, 1, "----------------", c);
	ft_putchar('%');
	ft_putchar('\n');
	printf("%-010c%%\n", c);
	return (0);
}
