/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:57:33 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/19 17:10:26 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
				str[i] -= 32;
		}
			i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "abcdefghj";

	printf("%s", ft_strupcase(str));
}
*/
