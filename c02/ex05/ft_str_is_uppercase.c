/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 01:35:16 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 01:43:47 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		index;
	int		result;
	char	control;

	index = 0;
	result = 1;
	while (*(str + index) != '\0')
	{
		control = *(str + index);
		if (control < 65 || control > 90)
		{
			result = 0;
		}
		index++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_str_is_uppercase("asdasd");
	printf("Result is: %d ", result);
	result = ft_str_is_uppercase("ASDASD");
	printf("Result2 is: %d ", result);
	result = ft_str_is_uppercase("");
	printf("Result3 is: %d ", result);
	return (0);
}
*/
