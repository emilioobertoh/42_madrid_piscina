/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 20:39:11 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/09 22:25:51 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		idx++;
	}
	return (idx);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Holaaaaa";
	int	len;

	len = ft_strlen(str);
	printf("Length is: %d ", len);
	return (0);
}
*/
