/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:51:42 by aboulfid          #+#    #+#             */
/*   Updated: 2025/08/03 15:54:14 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min > max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

/*int main()
{
  int *arr = ft_range(15, 10);
  for (int i = 0; i < 5; i++)
    printf("%d ", arr[i]);
}*/