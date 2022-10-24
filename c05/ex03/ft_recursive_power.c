/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:14:15 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/26 08:14:31 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	nb_aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_aux = nb;
	if (power > 1)
	{
		return (nb_aux * ft_recursive_power(nb, (power - 1)));
	}
	return (nb_aux);
}

/*int	main()
{	int nb = 8;
	int power = 2;
	int i;
	i = ft_iterative_power(nb, power);
	printf("%i", i);
}*/
