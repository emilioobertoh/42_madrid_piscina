/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:26:59 by eoberto-          #+#    #+#             */
/*   Updated: 2024/05/28 17:40:14 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*divptr;
	int	*modptr;

	a = 10;
	b = 5;
	divptr = &div;
	modptr = &mod;

	ft_div_mod(a, b, divptr, modptr);

	printf("Result: %d\n", div);
	printf("Rest: %d\n", mod);
}
