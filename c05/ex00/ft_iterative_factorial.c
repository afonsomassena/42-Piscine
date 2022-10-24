/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:57:45 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/26 08:05:11 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	i = nb - 1;
	res = i * nb;
	i--;
	while (i > 0)
	{
		res = res * i;
		i--;
	}
	return (res);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}
*/
