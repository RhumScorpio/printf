/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:19:30 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 01:12:02 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_percent(t_indic *flag)
{
	int	res;

	res = 0;
	if (flag->minus)
	{
		ft_putchar('%');
		res = print_width(flag->width, 1, 0);
	}
	else if (flag->zero)
	{
		res = print_width(flag->width, 1, 1);
		ft_putchar('%');
	}
	else
	{
		res = print_width(flag->width, 1, 0);
		ft_putchar('%');
	}
	return (res + 1);
}
