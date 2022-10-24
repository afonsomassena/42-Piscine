/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 08:18:14 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/26 08:18:40 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	numb;

	numb = nb;
	if (numb <= 0)
	{
		return (0);
	}
	if (numb == 1)
	{
		return (1);
	}
	i = 2;
	if (numb >= 2)
	{
		while (i * i <= numb)
		{
			if (i * i == numb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

/*int    main()
{
	printf("sqrt of %d is %d\n", 666, ft_sqrt(666));
        return (0);
}*/
