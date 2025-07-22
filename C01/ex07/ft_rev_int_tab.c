/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:48:07 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/19 16:14:16 by aboulfid         ###   ########.fr       */
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


void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	swp;

	i = 0;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swp;
		y = 0;
		while (y < size)
		{	
			ft_putnbr(tab[y++]);
			print(' ');
		}
		print('\n');
		i++;
	}
	/*i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i++]);
		print(' ');
	}*/
}

int main()
{
	int	arr[5] = {5, 4, 3, 2, 1};

	ft_rev_int_tab(arr, 5);
}
