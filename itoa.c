/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:15:13 by clesaffr          #+#    #+#             */
/*   Updated: 2020/11/16 10:53:20 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing_printf.h"

char	*ft_itoa(long ret)
{
	size_t	len;
	long	retlen;
	char	*str;

	retlen = ret;
	len = 0;
	if (ret < 0)
	{
		len++;
		retlen *= -1;
		ret *= -1;
	}
	while (retlen)
	{
		retlen /= 10;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(str) * len + 1)))
		return (NULL);
	str[len--] = '\0';
	while (ret > 0)
	{
		str[len--] = ret % 10 + '0';
		ret /= 10;
	}
	if (len == 0 && str[1] == '\0')
		str[len] = '0';
	if (len == 0 && str[1] != '\0')
		str[len] = '-';
	return (str);
}

int	ft_strlen(const char *str)
{
	int c;

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

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_putzero(int n)
{
	while (n)
	{
		ft_putchar('0');
		n--;
	}
}

void	ft_putspaces(int n)
{
	while (n)
	{
		ft_putchar(' ');
		n--;
	}
}

void	ft_int(t_indic *flag, va_list *va)
{
	int		i;
	int 	width;
	int		lenght;
	long	ret;
	char	*buff;

	width = 0;
	if (flag->star == 1)
		width = va_arg(*va, int);
	else
		width = flag->digits;
	ret = (long)va_arg(*va, int);
	buff = ft_itoa(ret);
	lenght = ft_strlen(buff);

	if (buff[0] == '-')
		flag->negative = 1;

	if (flag->point)
	{
		i = 0;
		if (width < lenght)
			ft_putstr(buff);
		else
		{
			if (flag->negative)
			{
				ft_putchar('-');
				ft_putzero(width - lenght--);
				ft_putstr(buff + 1);
			}
			else
			{
				ft_putzero(width - lenght);
				ft_putstr(buff);
			}
		}
	}
	if (flag->minus)
	{
		if (width <= lenght)
			ft_putstr(buff);
		else
		{
			ft_putstr(buff);
			ft_putspaces(width - lenght);
		}
	}
	if (flag->zero)
	{
		if (width <= lenght)
			ft_putstr(buff);
		else
		{
			if (flag->negative)
			{
				ft_putchar('-');
				ft_putzero(width - lenght);
				ft_putstr(buff + 1);
			}
			else
			{
				ft_putzero(width - lenght);
				ft_putstr(buff);
			}
	
		}
	}
	ft_putspaces(width - lenght);
	ft_putstr(buff);
	free(buff);
}
