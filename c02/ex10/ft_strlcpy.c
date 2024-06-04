/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:43:01 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 13:31:08 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	index = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size < 1)
	{
		return (length);
	}
	while (src[index] && index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (length);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char	dest[50];
	char	*src;
	int		size;

	src = "esta es una pequeña prueba";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n\n", dest);
	return (0);
}
*/
