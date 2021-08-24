/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 08:00:22 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/03 19:50:15 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*(str + c) != '\0')
	{
		c++;
	}
	return (c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *s)
{
	int	cut;

	cut = ft_strlen(s);
	if (!s)
		return (0);
	write(1, s, cut);
	return (cut);
}

int	print_cut(char *len, int cut)
{
	int		i;

	i = 0;
	while (i < cut)
	{
		ft_putchar(len[i]);
		i++;
	}
	return (i);
}

int	print_width(int width, int cut, int zero)
{
	int	lenght;
	int	i;

	i = 0;
	if (width < 0)
		width *= -1;
	lenght = width - cut;
	while (i < lenght)
	{
		if (zero)
			ft_putchar('0');
		else
			ft_putchar(' ');
		i++;
	}
	return (i);
}
