/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:16:40 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/05 11:59:42 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (*(s1 + index) != '\0' || *(s2 + index) != '\0')
	{
		if (*(s1 + index) != *(s2 + index))
		{
			return (*(s1 + index) - *(s2 + index));
		}
		index++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_strcmp("holA", "hola");
	printf("Result is negative: %d \n", result);
	result = ft_strcmp("hola", "holA");
	printf("Result is positive: %d \n", result);
	result = ft_strcmp("hola", "hola");
	printf("No difference at all: %d \n", result);
	return (0);
}
*/
