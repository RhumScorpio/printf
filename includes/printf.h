/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:27:38 by clesaffr          #+#    #+#             */
/*   Updated: 2021/08/23 17:12:10 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct s_indic
{
	int		width;
	int		zero;
	int		minus;
	int		dot;
	int		star;
	int		negative;
}				t_indic;

void	init_indic_flag(t_indic *flag);
void	ft_putchar(char c);
void	minusflag(t_indic *flag);
void	starflag(va_list *va, t_indic *flag);
void	zeroflag(t_indic *flag);
void	parsing_digits(char c, t_indic *flag);

int		ft_putstr(char *s);
int		parsing_types(char c, va_list *va, t_indic *flag);
int		ft_strlen(char *str);
int		ft_isdigit(char	c);
int		ft_istype(char c);
int		ft_issymbol(char c);
int		print_width(int width, int cut, int zero);
int		print_cut(char *len, int cut);
int		dotflag(const char *s, int mark, t_indic *flag);
int		parsing_symbols(va_list *va, const char *s, int mark, t_indic *flag);
int		int_dot(t_indic *flag, char *str, int cut);
int		int_minus(t_indic *flag, char *str, int cut);
int		int_zero(t_indic *flag, char *str, int cut);
int		int_width(t_indic *flag, char *str, int cut);
int		verifychar(const char *s, int i);
int		ft_int(char c, t_indic *flag, va_list *va);
int		ft_string(t_indic *flag, va_list *va);
int		ft_char(t_indic *flag, va_list *va);
int		ft_hexa(char c, t_indic *flag, va_list *va);
int		ft_pointer(t_indic *flag, va_list *va);
int		ft_percent(t_indic *flag);
int		ft_printf(const char *s, ...);
int		putzeroes(int lenght, int cut, char *str);

char	*ft_pbase(unsigned long long nbr);
char	*ft_itoa(int nb);
char	*ft_utoa(unsigned int nb);
char	*ft_xbase(unsigned int nbr, char c);

#endif
