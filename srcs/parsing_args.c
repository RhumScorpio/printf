/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 11:08:03 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/23 17:24:47 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	verifychar(const char *s, int i)
{
	int	j;
	int	setpoint;

	j = i;
	setpoint = 0;
	if (ft_istype(s[j]) || ft_isdigit(s[j]) || ft_issymbol(s[j]))
	{
		while (ft_issymbol(s[j]) || ft_isdigit(s[j]))
		{
			if (s[j] == '.')
				setpoint = 1;
			if (s[j] == '-' && setpoint)
				return (-1);
			j++;
		}
		if (ft_istype(s[j]))
			return (0);
	}
	return (-1);
}

int	parsing_symbols(va_list *va, const char *s, int mark, t_indic *flag)
{
	if (s[mark] == '-')
		minusflag(flag);
	else if (s[mark] == '*')
		starflag(va, flag);
	else if (s[mark] == '.')
		dotflag(s, mark, flag);
	return (0);
}

int	parsing_types(char c, va_list *va, t_indic *flag)
{
	int	res;

	res = 0;
	if (c == 'c')
		res = ft_char(flag, va);
	else if (c == 's')
		res = ft_string(flag, va);
	else if (c == 'u' || c == 'd' || c == 'i')
		res = ft_int(c, flag, va);
	else if (c == 'p')
		res = ft_pointer(flag, va);
	else if (c == 'x' || c == 'X')
		res = ft_hexa(c, flag, va);
	else if (c == '%')
	{
		ft_putchar('%');
		res = 1;
	}
	return (res);
}

void	parsing_digits(char c, t_indic *flag)
{
	if (c == '0' && flag->width == 0 && flag->dot == -1)
		zeroflag(flag);
	if (flag->dot == -1)
		flag->width = c - '0' + (flag->width * 10);
}
