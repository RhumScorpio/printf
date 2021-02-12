/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:00:00 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/12 11:22:17 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		main(void)
{
	int	nbr;
	int i;
	int love;
	int fuck;
	unsigned int opp;
	int star;

	star = 5;
	nbr = 13;
	i = 4234;
	love = -4234;
	fuck = -2147483648;
	opp = 4294967295;
	ft_printf("%x\n", nbr);
	printf("%x\n", nbr);
	ft_printf("%10.3d%%\n", nbr);
	printf("%10.3d%%\n", nbr);
	ft_printf("%-10d%%\n", nbr);
	printf("%-10d%%\n", nbr);
	ft_printf("%010d%%\n", nbr);
	printf("%010d%%\n", nbr);
	ft_printf("%*d%%\n", star, nbr);
	printf("%*d%%\n", star, nbr);

	ft_printf("%x\n", i);
	printf("%x\n", i);
	ft_printf("%10.3d%%\n", i);
	printf("%10.3d%%\n", i);
	ft_printf("%-10d%%\n", i);
	printf("%-10d%%\n", i);
	ft_printf("%010d%%\n", i);
	printf("%010d%%\n", i);
	ft_printf("%*d%%\n", star, i);
	printf("%*d%%\n", star, i);

	ft_printf("%x\n", love);
	printf("%x\n", love);
	ft_printf("%20.3d%%\n", love);
	printf("%20.3d%%\n", love);
	ft_printf("%-10d%%\n", love);
	printf("%-10d%%\n", love);
	ft_printf("%010d%%\n", love);
	printf("%010d%%\n", love);
	ft_printf("%*d%%\n", star, love);
	printf("%*d%%\n", star, love);

	ft_printf("%x\n", fuck);
	printf("%x\n", fuck);
	ft_printf("%20.3d%%\n", fuck);
	printf("%20.3d%%\n", fuck);
	ft_printf("%-10d%%\n", fuck);
	printf("%-10d%%\n", fuck);
	ft_printf("%010d%%\n", fuck);
	printf("%010d%%\n", fuck);
	ft_printf("%*d%%\n", star, fuck);
	printf("%*d%%\n", star, fuck);

	ft_printf("%x\n", opp);
	printf("%x\n", opp);
	ft_printf("%10.3d%%\n", opp);
	printf("%10.3d%%\n", opp);
	ft_printf("%-10d%%\n", opp);
	printf("%-10d%%\n", opp);
	ft_printf("%010d%%\n", opp);
	printf("%010d%%\n", opp);
	ft_printf("%*d%%\n", star, opp);
	printf("%*d%%\n", star, opp);

	return(0);
}
