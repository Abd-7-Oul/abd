/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:18:14 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/17 21:29:32 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		print('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		print(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
