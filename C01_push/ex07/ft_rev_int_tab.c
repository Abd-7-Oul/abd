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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < (size / 2))
	{
		swp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swp;
		i++;
	}
}
