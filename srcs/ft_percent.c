/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:19:30 by clesaffr          #+#    #+#             */
/*   Updated: 2021/03/05 16:42:34 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_percent(t_indic *flag)
{
	if (flag->minus)
	{
		ft_putchar('%');
		print_width(flag->width, 1, 0);
		return (0);
	}
	if (flag->zero)
	{
		print_width(flag->width, 1, 1);
		ft_putchar('%');
		return (0);
	}
	print_width(flag->width, 1, 0);
	ft_putchar('%');
	return (0);
}
