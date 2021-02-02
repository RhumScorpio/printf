/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:46:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/02 14:07:44 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_xbase(int nbr, char *base);
void	ft_hexa(char c, t_indic *flag, va_list *va);
int		len_nbr(int nbr);
char	*ft_strcat(char *dest, char *src);

int main(int ac, char **av)
{
	char *str;
	char *base;
	char *base2;
	char *new;
	int i;
	unsigned int test;

	if (ac == 1)
	{
		printf("ENTER A NUMBER SHITHEAD");
		return (0);
	}
	i = atoi(av[1]);
	test = (unsigned int)i;
//	base = "fedcba9876543210";
	base2 = "0123456789abcdef";
	str = ft_xbase(i, base2);
	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('\n');
	free(str);
	printf("real -- %x\n", i);
	new = ft_xbase(i, base2);
	ft_putstr(new);
	ft_putchar('\n');
	free(new);
	printf("real -- %x\n", i);
	return (0);
}
