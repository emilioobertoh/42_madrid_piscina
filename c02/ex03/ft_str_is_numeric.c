/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 01:01:36 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 01:16:37 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		index;
	int		result;
	char	control;

	result = 1;
	index = 0;
	while (*(str + index) != '\0')
	{
		control = *(str + index);
		if (control < 48 || control > 57)
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
	int result;

	result = ft_str_is_numeric("");
	printf("result is: %d", result);
	return (0);
}
*/
