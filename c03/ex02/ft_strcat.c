/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:08:38 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/05 20:36:13 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	end_dest;
	int	i_src;

	end_dest = 0;
	i_src = 0;
	while (*(dest + end_dest) != '\0')
	{
		end_dest++;
	}
	while (*(src + i_src) != '\0')
	{
		*(dest + end_dest) = *(src + i_src);
		end_dest++;
		i_src++;
	}
	*(dest + end_dest) = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World";

	ft_strcat(dest, src);
	printf("Result is: %s \n", dest);
	return (0);
}
*/
