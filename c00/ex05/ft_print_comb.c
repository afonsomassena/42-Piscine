/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:34:33 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/13 18:33:47 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	numbers(char first, char second, char last)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(last);
	if (first != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	last;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			last = second + 1;
			while (last <= '9')
			{
				numbers(first, second, last);
			last++;
			}
		second++;
		}
	first++;
	}
}
