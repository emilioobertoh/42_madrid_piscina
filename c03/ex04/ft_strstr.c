/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:43:50 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/07 00:51:58 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	mismatch;

	if (*(to_find) == '\0')
	{
	    return (str);
	}
	while (*(str) != '\0')
	{
	    if (*(str) == *(to_find))
	    {
		idx = 0;
		mismatch = 0;
		while (*(to_find + idx) != '\0')
		{
		    if (*(str + idx) != *(to_find + idx))
		    {
			mismatch = 1;
		    }
		    idx++;
		}
		if (mismatch == 0)
		{
		    return (str);
		}
	    }
	    str++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, world!";
    char to_find1[] = "hola";
    char *result1;

    result1 = ft_strstr(str1, to_find1);
    if (result1)
        printf("Found '%s' in '%s': '%s'\n", to_find1, str1, result1);
    else
        printf("'%s' not found in '%s'\n", to_find1, str1);

    return 0;
}
*/
