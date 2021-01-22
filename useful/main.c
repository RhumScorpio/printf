/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 12:16:40 by clesaffr          #+#    #+#             */
/*   Updated: 2020/10/27 16:56:56 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	//cspdiuxX%
	//-0.*
	
	char	*str;
	char	*str2;


	str = "louve";
	str2 = "volatiliser";
	printf("%10s |%10s|\n", "10", str);
	printf("%10s |%.10s|\n", ".10", str);
	printf("%10s |%-10s|\n", "-10", str);
	printf("%10s |%-.10s|\n", "-.10", str);
	printf("%10s |%-*s|\n", "-*5",10, str);
	printf("%10s |%*s|\n", "*5",10, str);
	printf("%10s |%-10.3s|\n", "-10.3", str);
	printf("%10s |%10.15s|\n", "10.15", str);
	printf("\n");

	printf("%10s |%10s|\n", "10", str2);
	printf("%10s |%.10s|\n", ".10", str2);
	printf("%10s |%-10s|\n", "-10", str2);
	printf("%10s |%-.10s|\n", "-.10", str2);
	printf("%10s |%*s|\n", "* 5",5, str2);
	printf("\n");

	printf("%10s |%.3d|\n", ".3", 5);
	printf("%10s |%3d|\n", "3", 5);
	printf("%10s |%0.3d|\n", "0.3", 5);
	printf("%10s |%03d|\n", "03", 5);
	printf("%10s |%3.0d|\n", "3.0", 5);
	printf("%10s |%*d|\n", "*6", 6, 10);
	printf("%10s |%0*d|\n", "0*6", 6, 10);
	printf("%10s |%-3d|\n", "-3", 5);
	printf("\n");
	
	printf("%10s |%-.3d|\n", "-.3", 5);
	printf("%10s |%-3d|\n", "-3", 5);
	printf("%10s |%-.3d|\n", "-.3", 5);
	printf("%10s |%-3d|\n", "-3", 5);
	printf("%10s |%-3.0d|\n", "-3.0", 5);
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


	printf("%10s |%.3x|\n", ".3", 255);
	printf("%10s |%3x|\n", "3", 255);
	printf("%10s |%0.3x|\n", "0.3", 255);
	printf("%10s |%03x|\n", "03", 255);
	printf("%10s |%3.0x|\n", "3.0", 255);
	printf("%10s |%*x|\n", "*6", 6, 255);
	printf("%10s |%0*x|\n", "0*6", 6, 255);
	printf("%10s |%-3x|\n", "-3", 255);
	printf("\n");
	
	printf("%10s |%-.3x|\n", "-.3", 255);
	printf("%10s |%-3x|\n", "-3", 255);
	printf("%10s |%-.3x|\n", "-.3", 255);
	printf("%10s |%-3x|\n", "-3", 255);
	printf("%10s |%-3.0x|\n", "-3.0", 255);
	printf("%10s |%-*x|\n", "-*6", 6, 255);
	printf("%10s |%-.*x|\n", "-.*6", 6, 255);
	printf("\n");

	printf("%10s |%.3X|\n", ".3", 255);
	printf("%10s |%3X|\n", "3", 255);
	printf("%10s |%0.3X|\n", "0.3", 255);
	printf("%10s |%03X|\n", "03", 255);
	printf("%10s |%3.0X|\n", "3.0", 255);
	printf("%10s |%*X|\n", "*6", 6, 255);
	printf("%10s |%0*X|\n", "0*6", 6, 255);
	printf("%10s |%-3X|\n", "-3", 255);
	printf("\n");
	
	printf("%10s |%-.3X|\n", "-.3", 255);
	printf("%10s |%-3X|\n", "-3", 255);
	printf("%10s |%-.3X|\n", "-.3", 255);
	printf("%10s |%-3X|\n", "-3", 255);
	printf("%10s |%-3.0X|\n", "-3.0", 255);
	printf("%10s |%-*X|\n", "-*6", 6, 255);
	printf("%10s |%-.*X|\n", "-.*6", 6, 255);
	printf("\n");
	
	return (0);
}
