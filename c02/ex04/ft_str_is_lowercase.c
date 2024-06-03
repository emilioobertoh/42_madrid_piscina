/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 01:20:32 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 01:31:23 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;
	int		result;
	char	control;

	index = 0;
	result = 1;
	while (*(str + index) != '\0')
	{
		control = *(str + index);
		if (control < 97 || control > 122)
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

	result = ft_str_is_lowercase("");
	printf("Result is: %d", result);
	return (0);
}
*/
