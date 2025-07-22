/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulfid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 09:41:47 by aboulfid          #+#    #+#             */
/*   Updated: 2025/07/21 10:51:01 by aboulfid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*low(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	low(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (b == 1)
			{
				str[i] = str[i] - 32;
				b--;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			b = 0;
		else
			b = 1;
		i++;
	}
	return (str);
}
