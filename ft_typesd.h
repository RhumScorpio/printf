/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typesd.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:17:57 by clesaffr          #+#    #+#             */
/*   Updated: 2020/12/15 13:34:01 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef	void	(t_specifier)(char *, va_list);

typedef struct	s_indic
{
	int	largeur;
	int	type;
	int	zero;
	int minus;
	int	point;
	int star;
}				t_indic;

#endif
