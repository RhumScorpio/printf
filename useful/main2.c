/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:55:49 by clesaffr          #+#    #+#             */
/*   Updated: 2020/12/15 12:04:26 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("|%.10d|\n", -666);
	printf("|%-10d|\n", -666);
	printf("|%10d|\n", -666);
	printf("|%010d|\n", -666);
	printf("|%0.10d|\n", -666);
	printf("|%*d|\n", 10, -666);
	printf("|%.10d|\n", 666);
	printf("|%-10d|\n", 666);
	printf("|%10d|\n",  666);
	printf("|%010d|\n", 666);
	printf("|%0.10d|\n", 666);
	printf("|%*d|\n", 10, 666);
}
