/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:27:08 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/02 08:30:59 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hola";
	char	dest[5];

	dest[4] = 9;
	ft_strncpy(dest, src, 1);
	printf("%s\n", dest);
	return (0);
}
*/
