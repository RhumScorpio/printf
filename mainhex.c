/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clesaffr <clesaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:46:50 by clesaffr          #+#    #+#             */
/*   Updated: 2021/02/01 22:26:55 by clesaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_xbase(int nbr, char *base);
void	ft_hexa(char c, t_indic *flag, va_list *va);
int		len_nbr(int nbr);

int main(int ac, char **av)
{
	char *str;
	char *base;
	int i;

	(void)ac;
	i = atoi(av[1]);
	base = "fedcba9876543210";
	//base = "0123456789abcdef";
	str = ft_xbase(i, base);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);
	printf("real -- %x\n", i);
	return (0);
}
