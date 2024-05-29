/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 08:19:13 by eoberto-          #+#    #+#             */
/*   Updated: 2024/05/29 08:42:57 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	
	if(*b != 0)
	{
		*a = temp / *b;
		*b = temp % *b;
	}
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*aptr;
	int	*bptr;

	a = 10;
	b = 5;
	aptr = &a;
	bptr = &b;

	printf("a value b4 div: %d\n", a);
	printf("b value b4 div: %d\n", b);
	
	ft_ultimate_div_mod(aptr, bptr);

	printf("a value after div: %d\n", a);
	printf("b value after div: %d\n", b);
	
	return (0);
}
 
