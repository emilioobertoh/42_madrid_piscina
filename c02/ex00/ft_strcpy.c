/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eboerto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:26:21 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/01 20:53:39 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\o';
	return (dest);
}

int	main(void)
{

}
