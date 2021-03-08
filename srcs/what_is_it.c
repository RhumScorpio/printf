/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   what_is_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:04:01 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/08 11:18:26 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_istype(char c)
{
	int		i;
	char	*s;

	i = 0;
	s = "cspdiuxX%";
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_issymbol(char c)
{
	if (c == '-' || c == '*' || c == '.')
		return (1);
	return (0);
}

void	init_indic_flag(t_indic *flag)
{
	flag->width = 0;
	flag->zero = 0;
	flag->dot = -1;
	flag->minus = 0;
	flag->star = 0;
	flag->negative = 0;
	flag->total = 0;
}
