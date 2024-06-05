/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:43:57 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/05 21:00:01 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	end_dest;
	unsigned int	i_src;

	end_dest = 0;
	i_src = 0;
	while (*(dest + end_dest) != '\0')
	{
		end_dest++;
	}
	while (*(src + i_src) != '\0' && i_src < nb)
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

	ft_strncat(dest, src, 1);
	printf("Result is: %s \n", dest);
	return (0);
}
*/
