/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:12:03 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/29 10:28:32 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	n = nb;
	if (power > 1)
	{
		n = n * ft_recursive_power(nb, power - 1);
	}
	return (n);
}
/*int main()
{
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(5, 1));
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(5, 5));
	printf("%d\n", ft_recursive_power(6, 5));
	printf("%d\n", ft_recursive_power(12, 3));
}*/
