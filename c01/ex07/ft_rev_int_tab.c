/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:45:08 by eoberto-          #+#    #+#             */
/*   Updated: 2024/05/29 13:46:47 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	storage;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		storage = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = storage;
		counter++;
	}
}
/*
#include <stdio.h>

int		main(void)
{
	int tab[5];
	int i;
	int size;

	size = 5;
	i = 0;
	while (i < size)
	{
		tab[i] = size - i;
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
*/
