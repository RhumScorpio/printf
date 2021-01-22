/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:54:07 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/21 09:06:56 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		print_cut(char *len, int cut)
{
	int i;

	i = 0;
	while(i < cut)
	{
		ft_putchar(len[i]);
		i++;
	}
	return (i);
}
