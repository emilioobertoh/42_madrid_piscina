/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obertoe- <eobertoe-@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:53:15 by eoberto-          #+#    #+#             */
/*   Updated: 2024/05/29 11:04:14 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
/*
int	main(void)
{
	ft_putstr("Hola!\n");
	return (0);
}
*/
