/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:23:16 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/26 17:20:54 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (des[i] != '\0')
		i++;
	while (src[j] != '\0' )
	{
		dest[i+j] = src[j];
		i++;
		j++;
	}
	}
	dest[i] = '\0';
	return (dest);
}
