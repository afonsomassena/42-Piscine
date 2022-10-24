/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:48:40 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/24 19:52:40 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	numbers(int first, int second)
{
	ft_putchar(48 + first / 10);
	ft_putchar(48 + first % 10);
	ft_putchar(' ');
	ft_putchar(48 + second / 10);
	ft_putchar(48 + second % 10);
	if (first != 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}	

void	ft_print_comb2(void)
{
	char	first;
	char	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			numbers(first, second);
		second++;
		}
	first++;
	}
}
