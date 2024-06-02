/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:59:40 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/02 13:12:27 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_grid(int **grid, int size)
{
	int	i;
	int	j;
	char num;
	
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			num = grid[i][j] + '0';
			write(1, &num, 1);
			if (j < size - 1)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int	size = 4;
	int	**grid;

	grid = (int **)malloc(size * sizeof(int *));
	for (int i = 0; i < size; i++)
	{
		grid[i] = (int *)malloc(size * sizeof(int));
	}

	int value = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			grid[i][j] = value++;
		}
	}

	print_grid(grid, size);

	for (int i = 0; i < size; i++)
	{
		free(grid[i]);
	}
	free(grid);

	return (0);
}
