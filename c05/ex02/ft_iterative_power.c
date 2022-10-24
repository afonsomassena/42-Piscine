/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:12:31 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/26 08:13:35 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_aux = nb;
	while (power > 1)
	{
		nb_aux *= nb;
		power--;
	}
	return (nb_aux);
}

/*int	main()
{	int nb = 2;
	int power = 2;
	int i;
	i = ft_iterative_power(nb, power);
	printf("%i", i);
}*/
