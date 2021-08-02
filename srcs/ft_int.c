/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:57:00 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/02 15:52:03 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*va_argtype(char c, t_indic *flag, va_list *va)
{
	unsigned int	num;
	char			*str;
	int				nbr;

	if (c == 'u')
	{
		num = va_arg(*va, unsigned int);
		str = ft_itoau(num);
	}
	else
	{
		nbr = va_arg(*va, int);
		str = ft_itoa(nbr);
		if (nbr < 0)
			flag->negative = 1;
	}
	return (str);
}

int	ft_int(char c, t_indic *flag, va_list *va)
{
	int		cut;
	int		res;
	char	*str;

	cut = 0;
	res = 0;
	str = va_argtype(c, flag, va);
	cut = ft_strlen(str);
	if (flag->zero)
		res = int_zero(flag, str, cut);
	else if (flag->minus)
		res = int_minus(flag, str, cut);
	else if (flag->dot >= 0)
		res = int_dot(flag, str, cut);
	else
		res = int_width(flag, str, cut);
	free(str);
	return (res);
}
