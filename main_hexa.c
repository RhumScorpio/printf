/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 17:31:40 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/01 22:22:56 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	int	nbr;
	int i;
	int love;
	int star;

	star = 5;
	nbr = 13;
	i = 4234;
	love = -4234;
	printf("%x\n", nbr);
	printf("%10.3x%\n", nbr);
	printf("%-10x%\n", nbr);
	printf("%010x%\n", nbr);
	printf("%*x%\n", star, nbr);
	
	printf("%x\n", i);
	printf("%10.3x%\n", i);
	printf("%-10x%\n", i);
	printf("%010x%\n", i);
	printf("%*x%\n", star, i);
	
	printf("%x\n", love);
	printf("%10.3x%\n", love);
	printf("%-10x%\n", love);
	printf("%010x%\n", love);
	printf("%*x%\n", star, love);	

	return(0);
}
