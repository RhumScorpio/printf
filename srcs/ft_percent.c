/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:19:30 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/08 11:20:18 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_percent(t_indic *flag)
{
	int i;

	i = 0;
	if (flag->minus)
	{
		ft_putchar('%');
		i = print_width(flag->width, 1, 0);
		return (i + 1);
	}
	if (flag->zero)
	{
		i = print_width(flag->width, 1, 1);
		ft_putchar('%');
		return (i + 1);
	}
	i = print_width(flag->width, 1, 0);
	ft_putchar('%');
	return (i + 1);
}
