#include "printf.h"

static int	ft_dot(t_indic *flag, char *str, int cut)
{
		int res;

		res = 0;
		if (flag->negative)
				ft_putchar('-');
		res += print_width(flag->dot, ft_strlen(str) - flag->negative, 1);
		ft_putstr(str + flag->negative);
		res += cut;
		return (res);
}

static int	ft_minus(t_indic *flag, char *str, int cut)
{
		int i;

		i = 0;
		if (flag->dot > cut)
				cut = flag->dot + flag->negative;
		if (flag->dot > 0)
				i += ft_dot(flag, str, cut);
		else
				ft_putstr(str);
		i += print_width(flag->width, cut, 0) + cut;
		return (i);
}

static int	ft_zero(t_indic *flag, char *str, int cut)
{
		int i;

		i = 0;
		if (flag->negative)
				ft_putchar('-');
		i += print_width(flag->width, cut, 1);
		ft_putstr(str + flag->negative);
		i += cut + flag->negative;
		return (i);
}

static int	ft_width(t_indic *flag, char *str, int cut)
{
		int i;

		i = 0;
		i = print_width(flag->width, cut, 0);
		ft_putstr(str);
		if (flag->width < 0)
				i = print_width(-flag->width, cut, 0);
		i += cut;
		return (i);
}

int			ft_int(char c, t_indic *flag, va_list *va)
{
		unsigned int num;
		char	*str;
		int		nbr;
		int		cut;
		int		res;

		cut = 0;
		res = 0;
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
		cut = ft_strlen(str);
		if (flag->zero)
				res = ft_zero(flag, str, cut);
		else if (flag->minus)
				res = ft_minus(flag, str, cut);
		else if (flag->dot > 0)
		{
				if (cut - flag->negative > flag->dot)
						flag->dot = cut - flag->negative;
				if (flag->width > 0)
						res += print_width(flag->width, flag->dot + flag->negative, 0);
				res += ft_dot(flag, str, cut);
				if (flag->width < 0)
						res += print_width(-flag->width, flag->dot + flag->negative, 0);
		}
		else
				res = ft_width(flag, str, cut);
		free(str);
		return (res);
}

