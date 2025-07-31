/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:25:09 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/28 20:40:59 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_recursive_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	n = nb;
	if (nb > 1)
		n = n * ft_recursive_factorial(nb - 1);
	return (n);
}
/*int main()
{
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(6));
	printf("%d\n", ft_recursive_factorial(12));
}*/
