/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:27:38 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 17:12:28 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef	struct	s_indic
{
	int		width;
	int		zero;
	int		minus;
	int		dot;
	int		star;
	int		negative;
}				t_indic;

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_int(t_indic *flag, va_list *va);
void	parsing_str(const char *s, ...);
t_indic	init_indic_flag(t_indic *flag);

int		ft_strlen(char *str);
int		ft_isdigit(char	c);
int		ft_istype(char c);
int		ft_issymbol(char c);
int		print_width(int width, int cut, int zero);
int		print_cut(char *len, int cut);

char	*ft_itoa(int nb);
char	*ft_strdup(char *src);

void		minusflag(t_indic *flag);
void	starflag(t_indic *flag);
void	dotflag(t_indic *flag);
void	zeroflag(t_indic *flag);
t_indic	*parsing_symbols(char c, t_indic *flag);
void	parsing_digits(char c, t_indic *flag);

