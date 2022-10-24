/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:39:58 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/19 17:12:48 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0' )
	{
		if (str[i] >= '0' && str[i] <= '9')
				i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main()
{
	printf("%d", ft_str_is_numeric("9238479384792"));
	printf("\n%d", ft_str_is_numeric("abc1defghijkl"));
	printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
} 
*/
