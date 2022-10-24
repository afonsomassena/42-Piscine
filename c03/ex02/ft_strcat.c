/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:54:42 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/24 13:49:56 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	g;

	i = 0;
	while (dest[i] != '\0')
		i++;
	g = 0;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char src[] = "tudo bem";
	char dest[] = "ola";
	printf("%s", ft_strcat(dest, src));
}
*/
