/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:00:46 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/24 14:08:50 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (g < nb && src[g] != '\0')
	{
		dest[i + g] = src[g];
		g++;
	}
	dest [i + g] = '\0';
	return (dest);
}

/*
int	main()
{
	char src[] = "tudo bem";
	char dest[] = "ola ";
	printf("%s", ft_strncat(dest, src, 4));
}
*/
