/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:36:02 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/04 12:27:39 by eoberto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		next;
	char	c;

	index = 0;
	next = 1;
	while (*(str + index) != '\0')
	{
		c = *(str + index);
		if (next == 1 && c >= 'a' && c <= 'z')
			str[index] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[index] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;
		else
			next = 0;
		index++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";

	printf(".%s.\n", ft_strcapitalize(str));
	return (0);
}
*/
