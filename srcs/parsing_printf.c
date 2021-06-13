/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:26:45 by clesaffr          #+#    #+#             */
/*   Updated: 2021/06/07 11:34:22 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

int	ft_printf(const char *s, ...)
{
	va_list	va;
	int		c_count;
	int		ret;
	int		ret_val;

	va_start(va, s);
	c_count = 0;
	ret = 0;
	ret_val = 0;
	while (s[c_count])
	{
		if (s[c_count] == '%' && s[c_count + 1])
		{
			ret = parsing_args(s, ++c_count, &va, &ret_val);
			if (ret)
				c_count += ret;
			else
			{
				ret_val++;
				write(1, &s[c_count - 1], 1);
			}
		}
		else
		{
			write(1, &s[c_count], 1);
			c_count++;
			ret_val++;
		}
	}
	va_end(va);
	return (ret_val);
}
