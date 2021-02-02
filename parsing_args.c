/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:08:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/02 07:42:19 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		parsing_symbols(va_list *va, const char *s, int mark, char c, t_indic *flag)
{
	int i;

	i = 0;
	if (c == '-')
		minusflag(flag);
	if (c == '*')
		starflag(va, flag);
	if (c == '.')
		i = dotflag(s, mark, flag);
	return (i);
}

/*void	parsing_types(char c, va_list *va, t_indic *flag)
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
	if (c == 'x' || c == 'X')
		ft_hexa(flag, va);

}*/

void	parsing_digits(char c, t_indic *flag)
{
	if (c == '0' && flag->width == 0)
		zeroflag(flag);
	flag->width = c - '0' + (flag->width * 10);
}
