/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoberto- <eoberto-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:36:08 by eoberto-          #+#    #+#             */
/*   Updated: 2024/06/09 23:50:19 by skodiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *buffer, int idx)
{
	while (idx >= 0)
	{
		write(1, (buffer + idx), 1);
		idx--;
	}
}

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		idx;
	int		negative;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	negative = (nb < 0);
	if (negative)
	{
		buffer[0] = '-';
		nb = -nb;
	}
	idx = 0;
	while (nb > 0)
	{
		buffer[idx] = (nb % 10) + '0';
		nb /= 10;
		idx++;
	}
	if (negative)
		write(1, "-", 1);
	ft_putstr(buffer, idx);
}
//
// int main(void)
// {
//     ft_putnbr(12345);
//     write(1, "\n", 1);
//     ft_putnbr(-67890);
//     write(1, "\n", 1);
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     return 0;
// }
