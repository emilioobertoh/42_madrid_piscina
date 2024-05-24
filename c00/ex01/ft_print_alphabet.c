/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 timestamp by eoberto-         #+#    #+#             */
/*   Updated: 2024/05/24 timestamp by eoberto-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	
	c = 'a';
	
	while(c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return(0);
}
