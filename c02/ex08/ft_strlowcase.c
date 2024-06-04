/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:09:39 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 11:29:10 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;
	char	control;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char test1[] = "HELLO WORLD";
	char test2[] = "42 IS THE ANSWER";
	char test3[] = "MIXED case123";
	char test4[] = "";
	char test5[] = "aleady lowercase";

	printf("Original: %s\n", test1);
	printf("Lowercase: %s\n", ft_strlowcase(test1));

	printf("Original: %s\n", test2);
	printf("Lowercase: %s\n", ft_strlowcase(test2));

	printf("Original: %s\n", test3);
	printf("Lowercase: %s\n", ft_strlowcase(test3));

	printf("Original: %s\n", test4);
	printf("Lowercase: %s\n", ft_strlowcase(test4));

	printf("Original: %s\n", test5);
	printf("Lowercase: %s\n", ft_strlowcase(test5));
	
	return (0);
}
*/
