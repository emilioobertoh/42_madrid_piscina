/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:35:41 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/03 15:00:28 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;
	int		result;
	char	control;

	index = 0;
	result = 1;
	while (*(str + index) != '\0')
	{
		control = *(str + index);
		if (control < 65 || (control > 90 && control < 97) || control > 122)
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

	result = ft_str_is_alpha("");

	printf("result is: %d", result);

	return (0);
}
*/
