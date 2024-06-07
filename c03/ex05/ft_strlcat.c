/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 01:18:33 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/07 01:20:47 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		idx++;
	}
	return (idx);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_size;
	unsigned int	src_size;
	unsigned int	dst_idx;
	unsigned int	idx;

	idx = 0;
	dst_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	dst_idx = dst_size;
	if (!size || size <= dst_size)
	{
		return (src_size + size);
	}
	while (*src && idx < size - dst_size - 1)
	{
		*(dest + dst_idx) = *(src + idx);
		idx++;
		dst_idx++;
	}
	*(dest + dst_idx) = '\0';
	return (dst_size + src_size);
}
/*
 * TODO: revisit this exercise
 *
#include <stdio.h>
int main ()
{
    char src[] = "Hola";
    char dest[] = "nana";

    printf("%d | %s", ft_strlcat(dest, src, 5), dest);
    return (0);
 }
*/
