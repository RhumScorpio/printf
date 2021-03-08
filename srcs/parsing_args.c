/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:08:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/08 11:40:24 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		parsing_symbols(va_list *va, const char *s, int mark, t_indic *flag)
{
	int i;

	i = 0;
	if (s[mark] == '-')
		minusflag(flag);
	if (s[mark] == '*')
		starflag(va, flag);
	if (s[mark] == '.')
		i = dotflag(s, mark, flag);
	return (0);
}

int		parsing_types(char c, va_list *va, t_indic *flag)
{
	if (c == 'c')
		return(ft_char(flag, va))
	if (c == 's')
		return(ft_string(flag, va))
	if (c == 'd' || c == 'i')
		return(ft_int(flag, va))
	if (c == 'p')
		return(ft_pointer(flag, va))
	if (c == 'x' || c == 'X')
		return(ft_hexa(c, flag, va))
	if (c == '%')
		return(ft_percent(flag))
}

void	parsing_digits(char c, t_indic *flag)
{
	if (c == '0' && flag->width == 0 && flag->dot == -1)
		zeroflag(flag);
	if (flag->dot == -1)
		flag->width = c - '0' + (flag->width * 10);
}
