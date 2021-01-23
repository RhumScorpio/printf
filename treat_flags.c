/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:30:24 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 17:10:03 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void		minusflag(t_indic *flag)
{
	flag->minus = 1;
}

void		starflag(t_indic *flag)
{
	flag->star = 1;
}

void		dotflag(t_indic *flag)
{
	flag->dot = 1;
}

void		zeroflag(t_indic *flag)
{
	flag->zero = 1;
}
