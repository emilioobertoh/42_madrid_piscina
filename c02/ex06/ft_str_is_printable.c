/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:26:37 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 08:40:38 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;
	int		result;
	char	control;

	index = 0;
	result = 1;
	while (*(str + index) != '\0')
	{
		control = *(str + index);
		if (control < 32 || control > 126)
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

	result = ft_str_is_printable("asdasd");
	printf("Result is: %d ", result);
	result = ft_str_is_printable("025864.../ ");
	printf("Result is: %d ", result);
	result = ft_str_is_printable("\n");
	printf("Result is: %d ", result);
	return (0);
}
*/
