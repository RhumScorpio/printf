/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:30:24 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/03 17:16:25 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void		minusflag(t_indic *flag)
{
	if (flag->zero == 1)
		flag->zero = 0;
	flag->minus = 1;
}

void		starflag(va_list *va, t_indic *flag)
{
	if (flag->dot == 0)
		flag->dot = va_arg(*va, int);
	else
		flag->width = va_arg(*va, int);
	flag->star = 1;
}

int		dotflag(const char *s, int mark, t_indic *flag)
{
	int i;

	if (flag->zero == 1)
		flag->zero = 0;
	flag->dot = 0;
	i = 0;
	while (ft_isdigit(s[++mark]))
	{
		flag->dot = (flag->dot * 10) + (s[mark] - '0');
		i++;
	}
	return (i);
}

void		zeroflag(t_indic *flag)
{
	if (flag->minus)
		flag->zero = 0;
	else
		flag->zero = 1;
}
