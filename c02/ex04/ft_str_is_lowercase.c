/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:45:17 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/19 17:13:20 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0' )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
				i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("JAJHJHSHFBL"));
	printf("\n%d", ft_str_is_lowercase("-_134556efghij67"));
}
*/
