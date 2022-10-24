/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:09:57 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/24 20:05:32 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	if (to_find[g] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + g] == to_find[g] && str[i + g] != '\0')
			g++;
		if (to_find[g] == '\0')
			return (str + i);
		i++;
		g = 0;
	}
	return (0);
}

/*
int	main()
{
	char str[] = "tudo bem";
	char find[] = "o";
	printf("%s", ft_strstr(str, find));
}
*/
