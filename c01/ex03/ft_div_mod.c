/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:22:02 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/15 19:25:25 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 42;
	b = 10;
	div = calloc(1, sizeof(int));
	mod = calloc(1, sizeof(int));
	ft_div_mod(a, b, div, mod);
	printf("a: %d, b: %d, div: %p, *div: %d, mod: %p, *mod: %d\n",
			a, b, div, *div, mod, *mod);
	return (0);
}
*/
