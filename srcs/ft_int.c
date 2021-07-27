/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:57:00 by clesaffr          #+#    #+#             */
/*   Updated: 2021/07/24 00:16:02 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	void	putzero(int type)
{
		char	c;

		c = ' ';
		if (type == 1)
				write(1,&c,1);
}

static int	ft_dot(t_indic *flag, char *str, int cut)
{
		int		res;

		res = 0;
		if (cut - flag->negative > flag->dot && *str != '0')
				flag->dot = cut - flag->negative;
		if (flag->width > 0 && !(flag->minus))
				res += print_width(flag->width, flag->dot + flag->negative, 0);
		if (*str == '0' && flag->dot == 0)
		{
				if (flag->width < 0)
					res += print_width(flag->width, 0, 0);
				return (res);
		}
		if (flag->negative)
				ft_putchar('-');
		res += print_width(flag->dot, cut - flag->negative, 1);
		ft_putstr(str + flag->negative);
		res += cut;
		if (flag->width > 0 && flag->minus)
		{
				res += print_width(flag->width, flag->dot + flag->negative, 0);
		}
		if (flag->width < 0)
				res += print_width(-flag->width, flag->dot + flag->negative, 0);
		return (res);
}

static int	ft_minus(t_indic *flag, char *str, int cut)
{
		int i;
//tester -(-1) / .(-1)
		i = 0;
		if (*str == '0' && flag->dot == 0)
		{
				i += print_width(flag->width, 0, 0);
				return (i);
		}
		if (flag->dot >= 0)
				i += ft_dot(flag, str, cut);
		else
		{
				ft_putstr(str);
				i += print_width(flag->width, cut, 0) + cut;
		}
		return (i);
}

static int	ft_zero(t_indic *flag, char *str, int cut)
{
		int i;

		i = 0;
		if (*str == '0' && flag->dot == 0)
		{
				i += print_width(flag->width, 0, 0);
				return (i);
		}
		if (flag->dot >= 0)
		{
				i += ft_dot(flag, str, cut);
				return (i);
		}
		if (flag->width < 0)
		{
				if (flag->negative)
						ft_putchar('-');
				ft_putstr(str + flag->negative);
				i += print_width(-flag->width, cut, 0);

		}
		else
		{
				if (flag->negative)
						ft_putchar('-');
				i += print_width(flag->width, cut, 1);
				ft_putstr(str + flag->negative);
		}
		i += cut;
		return (i);
}

static int	ft_width(t_indic *flag, char *str, int cut)
{
		int i;

		i = 0;
		if (*str == '0' && flag->dot == 0)
		{
				i += print_width(flag->width, 0, 0);
				return (i);
		}
		else
		{
				if (flag->width > 0)
						i += print_width(flag->width, cut, 0);
				ft_putstr(str);
				i += cut;
				if (flag->width < 0)
						i += print_width(-flag->width, cut, 0);
		}
		return (i);
}

char		*va_argtype(char c, t_indic *flag, va_list *va)
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

int			ft_int(char c, t_indic *flag, va_list *va)
{
		int		cut;
		int		res;
		char	*str;

		cut = 0;
		res = 0;
		str = va_argtype(c, flag, va);
		cut = ft_strlen(str);
		if (flag->zero)
		{
			//	printf("zero");
				res = ft_zero(flag, str, cut);
		}
		else if (flag->minus)
		{
			//	printf("minus");
				res = ft_minus(flag, str, cut);
		}
		else if (flag->dot >= 0)
		{
			//	printf("dot");
				res = ft_dot(flag, str, cut);
		}
		else
		{
			//	printf("width");
				res = ft_width(flag, str, cut);
		}
		free(str);
		return (res);
}

