/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obertoe- <eobertoe-@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:53:15 by eoberto-           #+#    #+#             */
/*   Updated: 2024/05/29 09:06:35 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
/*
int	main(void)
{
	ft_putstr("Just gettin to the station\n");
	return (0);
}
*/
