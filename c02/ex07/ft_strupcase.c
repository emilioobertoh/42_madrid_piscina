/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 08:45:53 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 10:40:47 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;
	char	control;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
    char test1[] = "hello world!";
    char test2[] = "42 is the answer.";
    char test3[] = "Mixed CASE123";
    char test4[] = ""; // Empty string
    char test5[] = "ALREADY UPPERCASE";

    printf("Original: %s\n", test1);
    printf("Uppercase: %s\n", ft_strupcase(test1));

    printf("Original: %s\n", test2);
    printf("Uppercase: %s\n", ft_strupcase(test2));

    printf("Original: %s\n", test3);
    printf("Uppercase: %s\n", ft_strupcase(test3));

    printf("Original: %s\n", test4);
    printf("Uppercase: %s\n", ft_strupcase(test4));

    printf("Original: %s\n", test5);
    printf("Uppercase: %s\n", ft_strupcase(test5));

    return 0;
}
*/
