/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/ 13:25:54 by clesaffr          #+#    #+#             */
/*   Updated: 2021/01/23 13:32:34 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	//cspdiuxX%
	//-0.*
	
	char	*str;
	char	*str2;

	printf("%10s |%*.*d|\n", "*.*", -10, 5, 42);
	printf("%10s |%*.*d|\n", "*.*", 10, -5, 42);
	printf("%10s |%*.*d|\n", "*.*", 6, -3, 42);
	printf("%10s |%*.*d|\n", "*.*", -6, 3, 42);
	printf("%10s |%*.*d|\n", "*.*", -10, -5, 42);
	printf("%10s |%*.*d|\n", "*.*", 10, 5, 42);

	str = "louve";
	str2 = "volatiliser";
	printf("%10s |%10s|\n", "10", str);
	printf("%10s |%.10s|\n", ".10", str);
	printf("%10s |%-10s|\n", "-10", str);
	printf("%10s |%-.10s|\n", "-.10", str);
	printf("%10s |%-*s|\n", "-*5",10, str);
	printf("%10s |%*s|\n", "*5",10, str);
	printf("%10s |%-10s|\n", "-10.3", str);
	printf("%10s |%10.15s|\n", "10.15", str);
	printf("\n");

	printf("%10s |%10s|\n", "10", str2);
	printf("%10s |%.10s|\n", ".10", str2);
	printf("%10s |%-10s|\n", "-10", str2);
	printf("%10s |%-.10s|\n", "-.10", str2);
	printf("%10s |%*s|\n", "* 5",5, str2);
	printf("\n");

	printf("%10s |%d|\n", ".3", 5);
	printf("%10s |%-d|\n", "-.3", 5);
	printf("%10s |%5d|\n", "5.3", 5123666);
	printf("%10s |%5d|\n", "5.3", 5123);
	printf("%10s |%5d|\n", "5.3", 5);
	printf("%10s |%-5d|\n", "-5.3", 5);
	printf("%10s |%d|\n", "3", 5);
	printf("%10s |%0d|\n", "0.3", 5);
	printf("%10s |%d|\n", "03", 5);
	printf("%10s |%.0d|\n", "3.0", 5);
	printf("%10s |%*d|\n", "*6", 6, 10);
	printf("%10s |%0*d|\n", "0*6", 6, 10);
	printf("%10s |%d|\n", "-3", 5);
	printf("\n");
	
	printf("%10s |%.0d|\n", ".d", 5);
	printf("%10s |%d|\n", "03", 5);
	printf("%10s |%d|\n", ".3", 5);
	printf("%10s |%d|\n", "-3", 5);
	printf("%10s |%-d|\n", "-.3", 5);
	printf("%10s |%-d|\n", "-03", 5);
	printf("%10s |%d|\n", "-3", 5);
	printf("%10s |%-d|\n", "-.3", 5);
	printf("%10s |%d|\n", "-3", 5);
	printf("%10s |%.0d|\n", "-3.0", 5);
	printf("%10s |%-*d|\n", "-*6", 6, 10);
	printf("%10s |%-.*d|\n", "-.*6", 6, 10);
	printf("\n");
	
	printf("%10s |%10%|\n", "10");
	printf("%10s |%-10%|\n", "-10");
	printf("%10s |%-*%|\n", "-*5",10);
	printf("%10s |%*%|\n", "*5",10);
	printf("\n");
	printf("%10s |%10c|\n", "10", 'z');
	printf("%10s |%-10c|\n", "-10", 'z');
	printf("%10s |%-*c|\n", "-*5",10, 'z');
	printf("%10s |%*c|\n", "*5",10, 'z');
	printf("\n");


	printf("%10s |%x|\n", ".3", 255);
	printf("%10s |%5x|\n", "3", 255);
	printf("%10s |%0x|\n", "0.3", 255);
	printf("%10s |%x|\n", "03", 255);
	printf("%10s |%.0x|\n", "3.0", 255);
	printf("%10s |%*x|\n", "*6", 6, 255);
	printf("%10s |%0*x|\n", "0*6", 6, 255);
	printf("%10s |%x|\n", "-3", 255);
	printf("\n");
	
	printf("%10s |%-x|\n", "-.3", 255);
	printf("%10s |%x|\n", "-3", 255);
	printf("%10s |%-x|\n", "-.3", 255);
	printf("%10s |%x|\n", "-3", 255);
	printf("%10s |%.0x|\n", "-3.0", 255);
	printf("%10s |%-*x|\n", "-*6", 6, 255);
	printf("%10s |%-.*x|\n", "-.*6", 6, 255);
	printf("\n");

	printf("%10s |%X|\n", ".3", 255);
	printf("%10s |%X|\n", "3", 255);
	printf("%10s |%0X|\n", "0.3", 255);
	printf("%10s |%X|\n", "03", 255);
	printf("%10s |%.0X|\n", "3.0", 255);
	printf("%10s |%*X|\n", "*6", 6, 255);
	printf("%10s |%0*X|\n", "0*6", 6, 255);
	printf("%10s |%X|\n", "-3", 255);
	printf("\n");
	
	printf("%10s |%-X|\n", "-.3", 255);
	printf("%10s |%X|\n", "-3", 255);
	printf("%10s |%-X|\n", "-.3", 255);
	printf("%10s |%X|\n", "-3", 255);
	printf("%10s |%.0X|\n", "-3.0", 255);
	printf("%10s |%-*X|\n", "-*6", 6, 255);
	printf("%10s |%-.*X|\n", "-.*6", 6, 255);
	printf("\n");
	
	return (0);
}
