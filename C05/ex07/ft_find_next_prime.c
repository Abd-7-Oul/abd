/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:43:18 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/30 15:58:14 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if (nb == i)
			{
				return (nb);
			}
			else
			{
				nb++;
				i = 1;
			}
		}
		i++;
	}
	return (2);
}
