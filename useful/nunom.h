/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:25:21 by clesaffr          #+#    #+#             */
/*   Updated: 2020/10/27 18:50:18 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdargs.h>

typedef	void	(t_specifier)(char *, va_list);

typedef struct	s_indic
{
	int	largeur;
	int	type;
	int	zero;
	int minus;
	int	point;
	int star;
}				t_indic

#endif


