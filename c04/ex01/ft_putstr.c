/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:27:14 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/09 22:34:47 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (*(str + idx) != '\0')
	{
		write(1, (str + idx), 1);
		idx++;
	}
}
/*
int	main(void)
{
	char	str[] = "Holaaaaaaaa";

	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}
*/
