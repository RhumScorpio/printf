/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:16:40 by clesaffr          #+#    #+#             */
/*   Updated: 2020/10/13 15:59:16 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	char	*str;

	str = av[1];
	printf("%10s |%10s|\n", "10char", str);
	printf("%10s |%.10s|\n", ".10char", str);
	printf("%10s |%-10s|\n", "-10char", str);
	printf("%10s |%5s|\n", "5char", str);
	printf("%10s |%.5s|\n", ".5char", str);
	printf("%10s |%-5s|\n", "-5char", str);
	printf("%10s |%10.5s|\n", "10.5char", str);
	printf("%10s |%-10.5s|\n", "-10.5char", str);
	printf("%10s |%0.3d|\n", "0int", 5);
	printf("%10s |%d|\n", "int", 100234553);
	printf("%10s |%*d|\n", "*int", 6, 103);
	printf("%10s |%0*d|\n", "0*int", 6, 103);
	printf("%10s |%d%0*d|\n", "d0*int", 9, 6, 103);
	

	return (0);
}
