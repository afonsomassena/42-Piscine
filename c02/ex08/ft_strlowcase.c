/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:14:47 by afgoncal          #+#    #+#             */
/*   Updated: 2022/09/20 17:18:38 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
				str[i] += 32;
		}
			i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "OJSDKJDLSKJDL";

	printf("%s", ft_strupcase(str));
}
*/
