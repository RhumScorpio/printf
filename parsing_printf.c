/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:26:45 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/11 14:09:01 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing_printf.h"

int	ft_isdigit(char	c)
{
	if (c >= '0' && c < '9')
	{
		printf("ft_isdigits\n");
		return (1);
	}
	printf("ft_isNOTdigits\n");
	return (0);
}

int	ft_istype(char c)
{
	int i;
	char *s;

	i = 0;
	s = "cspdiuxX%";
	while (s[i])
	{
		printf("is c == %c\n", s[i]);
		if (c == s[i])
		{
			printf("ft_istype\n");
			return (1);
		}
		i++;
	}
	printf("ft_isNOTtype\n");
	return (0);
}

int	ft_issymbol(char c)
{
	if (c == '-' || c == '*' || c == '.')
	{
		printf("ft_issymbol\n");
		return (1);
	}
	printf("ft_isNOTsymbol\n");
	return (0);
}

void	init_indic_flag(t_indic *flag)
{
	flag->digits = 0;
	flag->zero = 0;
	flag->point = 0;
	flag->minus = 0;
	flag->star = 0;
	flag->negative = 0;
}

void	put_zero(t_indic *flag)
{
	if (flag->minus == 1)
		flag->minus == 0;
	flag->zero == 1;
}

void	put_symbol(char c, t_indic *flag)
{
	if (c == '-' && flag->zero == 0)
		flag->minus = 1;
	if (c == '.')
		flag->point = 1;
	if (c == '*')
		flag->star = 1;
}

void	parse_digits(char s, t_indic *flag)
{
	flag->digits = s - '0' + (flag->digits * 10);
}

void	select_ft_type(char s, t_indic *flag, va_list *va)
{
	//void (*type[1])(t_indic, va_list);

	//type[0] = ft_int;
	ft_int(flag, va);
	/*type[1] = ft_string;
	type[2] = ft_char;
	type[3] = ft_p;
	type[4] = ft_x;
	type[5] = ft_X;
	type[7] = ft_u;
	type[6] = ft_percent;*/
	// TABLEAU DE POINTEURS SUR FONCTION AVEC cspdiuxX% comme index
}

int parsing_args(const char *s, int i, va_list *va)
{
	t_indic	*flag;
	int	c_count;

	printf("parsingargs\n");
	printf("on va checker char = %c\n", s[i]);
	ft_istype(s[i]);
	//init_indic_flag(flag);
	c_count = 0;
	while (ft_isdigit(s[i])/* || ft_istype(s[i])*/ || ft_issymbol(s[i]))
	{
		printf("ft_istype\n");
		if (ft_istype(s[i]))
		{
			select_ft_type(s[i], flag, va);
			c_count++;
			return (c_count);
		}
		printf("ft_putzero\n");
		if (s[i] == '0' && flag->digits == 0)
		{
			printf("ISZERO\n");
			put_zero(flag);
		}
		printf("ft_isdigits\n");
		if (ft_isdigit(s[i]))
			parse_digits(s[i], flag);
		printf("ft_issymbol\n");
		if (ft_issymbol(s[i]))
			put_symbol(s[i], flag);
		c_count++;
		i++;
	}
	printf("endparsing\n");
	return (c_count);
}

void	parsing_str(const char *s, ...)
{
	va_list	va;
	int i;
	int c_count;

	va_start(va, s);
	i = 0;
	c_count = 0;
	printf("debut\n");
	while(s[i])
	{
		if(s[i] == '%' && s[i + 1])
		{
			printf("FIND%\n");
			c_count += parsing_args(s, i + 1, &va);
		}
		write(1, &s[i], 1);
		i++;
	}		
	printf("end");
	va_end(va);
}
