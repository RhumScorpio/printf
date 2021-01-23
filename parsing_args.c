/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:08:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 17:14:07 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*t_indic	*parsing_symbols(char c, t_indic *flag)
{
	if (c == '-')
		flag = minusflag(flag);
	if (c == '*')
		flag = starflag(flag);
	if (c == '.')
		flag = dotflag(flag);
	return (flag);
}

void	parsing_types(char c, va_list *va, t_indic *flag)
{
	if (c == 'c')
		ft_char(flag, va);
	if (c == 's')
		ft_string(flag, va);
	if (c == 'd' || c == 'i')
		ft_int(flag, va);
	if (c == 'p')
		ft_pointer(flag, va);
	if (c == 'u')
		ft_unsignedint(flag, va);
	if (c == 'x')
		ft_hexa(flag, va);
	if (c == 'X')
		ft_hexacaps(flag, va);
}*/

void	parsing_digits(char c, t_indic *flag)
{
	if (c == '0' && flag->width == 0)
		zeroflag(flag);
	flag->width = c - '0' + (flag->width * 10);
}
