/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_printf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:27:38 by clesaffr          #+#    #+#             */
/*   Updated: 2020/11/16 10:41:11 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef	struct	s_indic
{
	int		digits;
	int		zero;
	int		minus;
	int		point;
	int		star;
	int		negative;
}				t_indic;

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_int(t_indic *flag, va_list *va);
void	parsing_str(const char *s, ...);
