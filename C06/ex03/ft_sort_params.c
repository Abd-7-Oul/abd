/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:52:44 by aboulfid          #+#    #+#             */
/*   Updated: 2025/08/02 15:24:21 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*s;

	s = *s1;
	*s1 = *s2;
	*s2 = s;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (ac - 1 > i)
	{
		j = 1;
		while (ac - 1 > j)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(&av[j], &av[j + 1]);
			j++;
		}
		i++;
	}
	j = 1;
	while (ac > j)
	{
		i = 0;
		while (av[j][i] != '\0')
			write (1, &av[j][i++], 1);
		write (1, "\n", 1);
		j++;
	}
}
