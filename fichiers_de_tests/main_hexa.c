/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:31:40 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/02 09:56:21 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
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
	printf("%x\n", nbr);
	printf("%10.3x%%\n", nbr);
	printf("%-10x%%\n", nbr);
	printf("%010x%%\n", nbr);
	printf("%*x%%\n", star, nbr);
	
	printf("%x\n", i);
	printf("%10.3x%%\n", i);
	printf("%-10x%%\n", i);
	printf("%010x%%\n", i);
	printf("%*x%%\n", star, i);
	
	printf("%x\n", love);
	printf("%10.3x%%\n", love);
	printf("%-10x%%\n", love);
	printf("%010x%%\n", love);
	printf("%*x%%\n", star, love);	

	printf("%x\n", fuck);
	printf("%10.3x%%\n", fuck);
	printf("%-10x%%\n", fuck);
	printf("%010x%%\n", fuck);
	printf("%*x%%\n", star, fuck);			
	
	printf("%x\n", opp);
	printf("%10.3x%%\n", opp);
	printf("%-10x%%\n", opp);
	printf("%010x%%\n", opp);
	printf("%*x%%\n", star, opp);		
	
	return(0);
}
