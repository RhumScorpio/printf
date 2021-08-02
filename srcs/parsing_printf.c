/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:26:45 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 01:13:37 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	parsing_args(const char *s, int i, va_list *va, int *ret_val)
{
	t_indic	flag;
	int		c_count;

	init_indic_flag(&flag);
	c_count = 0;
	while (ft_isdigit(s[i]) || ft_istype(s[i]) || ft_issymbol(s[i]))
	{
		if (ft_isdigit(s[i]))
			parsing_digits(s[i], &flag);
		if (ft_issymbol(s[i]))
			c_count += parsing_symbols(va, s, i, &flag);
		if (ft_istype(s[i]))
		{
			*ret_val += parsing_types(s[i], va, &flag);
			c_count++;
			break ;
		}
		i++;
		c_count++;
	}
	return (c_count);
}

void	printchar(int *retval, char c)
{
	*retval += 1;
	write(1, &c, 1);
}

void	printchar_gofor(int *retval, char c, int *c_count)
{
	*retval += 1;
	*c_count += 1;
	write(1, &c, 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	int		c_count;
	int		ret;
	int		ret_val;

	va_start(va, s);
	c_count = 0;
	ret_val = 0;
	while (s[c_count])
	{
		if (s[c_count] == '%' && s[c_count + 1])
		{
			ret = parsing_args(s, ++c_count, &va, &ret_val);
			if (ret)
				c_count += ret;
			else
				printchar(&ret_val, s[c_count - 1]);
		}
		else
			printchar_gofor(&ret_val, s[c_count], &c_count);
	}
	va_end(va);
	return (ret_val);
}
