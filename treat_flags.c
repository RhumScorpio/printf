/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 09:30:24 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 14:10:35 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_indic		minusflag(t_indic *flag)
{
	flag->minus = 1;
	return (*flag);
}

t_indic		starflag(t_indic *flag)
{
	flag->star = 1;
	return (*flag);
}

t_indic		dotflag(t_indic *flag)
{
	flag->dot = 1;
	return (*flag);
}

t_indic		zeroflag(t_indic *flag)
{
	flag->zero = 1;
	return (*flag);
}
