/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 04:31:12 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/28 05:09:45 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;
	int	*buff;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	buff = malloc(diff * sizeof(int *));
	if (!buff)
	{
		*range = 0;
		return (-1);
	}
	*range = buff;
	i = 0;
	while (i < diff)
	{
		buff[i] = min + i;
		i++;
	}
	return (diff);
}

/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
