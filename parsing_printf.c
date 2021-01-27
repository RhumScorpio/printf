/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:26:45 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/27 17:23:16 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//void	select_ft_type(char s, t_indic *flag, va_list *va)
//{
	//void (*type[1])(t_indic, va_list);

	//type[0] = ft_int;
	//ft_int(flag, va);
	/*type[1] = ft_string;
	type[2] = ft_char;
	type[3] = ft_p;
	type[4] = ft_x;
	type[5] = ft_X;
	type[7] = ft_u;
	type[6] = ft_percent;*/
	// TABLEAU DE POINTEURS SUR FONCTION AVEC cspdiuxX% comme index
//}

int parsing_args(const char *s, int i, va_list *va)
{
	t_indic	*flag;
	int	c_count;

	init_indic_flag(flag);
	c_count = 0;
	while (ft_isdigit(s[i]) || ft_istype(s[i]) || ft_issymbol(s[i]))
	{
		if (ft_isdigits(s[i]))
			parsing_digits(s[i], flag);
		if (ft_issymbol(s[i]))
			c_count += parsing_symbols(va, s, i, s[i], flag);
		if (ft_istype(s[i]))
		{
			parsing_types(s[i], va, flag);
			c_count++;
			break;
		}
		i++;
		c_count++;
	}
	return (c_count);
}

void	printf(const char *s, ...)
{
	va_list	*va;
	int c_count;

	va_start(va, s);
	c_count = 0;
	while (s[c_count])
	{
		if (s[c_count] == '%' && s[c_count + 1])
		{
			c_count += parsing_args(s, c_count++, va);
		}
		write(1, &s[c_count], 1);
		c_count++;
	}
	va_end(va);
}
