/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <aboulfid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:29:53 by aboulfid          #+#    #+#             */
/*   Updated: 2025/08/04 10:56:44 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		arr = (NULL);
		*range = arr;
		return (0);
	}
	size = (max - min);
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}

/*int main()
{
  int *arr =(int *)malloc(sizeof(int) * 5);
  ft_ultimate_range(&arr, 5, 10);
  for (int i = 0; i < 5; i++)
	printf("%d ", arr[i]);
}*/
