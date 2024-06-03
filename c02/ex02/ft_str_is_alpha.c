/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:35:41 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/03 12:54:32 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fr_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if()
		{

		}
		else if (str[index] >= 65 || str[index] <= 90)
		{
			return (1);
		}
		else if (str[index] >= 97 || str[index] <= 122)
		{
			return (1);
		}
		index++;
	}
}
