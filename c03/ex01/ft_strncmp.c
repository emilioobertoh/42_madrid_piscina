/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:18:42 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/05 16:10:49 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	result;

	//result = ft_strncmp("holA", "hola", 3);
	printf("Should be negative: %d \n", ft_strncmp("holA", "hola", 4));
	result = ft_strncmp("hola", "holA", 4);
	printf("Should be positive: %d \n", result);
	result = ft_strncmp("hola", "hola", 4);
	printf("Should be 0: %d \n", result);
	result = ft_strncmp("holA", "hola", 2);
	printf("Should also be 0: %d \n", result);
	return (0);
}

