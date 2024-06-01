/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:53:49 by eoberto-          #+#    #+#             */
/*   Updated: 2024/05/28 15:02:52 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int *aptr;
	int	*bptr;

	a = 12;
	b = 56;
	aptr = &a;
	bptr = &b;

	printf("a value: %d\n", a);
	printf("b value: %d\n", b);

	ft_swap(aptr, bptr);

	printf("a swapped value: %d\n", a);
	printf("b swapped value: %d\n", b);
}
*/
