/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exist_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:07:27 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 20:09:16 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0' && str[index] != '\n')
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		while (dest[i] == '\0')
		{
			dest[i] = src[i];
			if (dest[i + 1] != '\0')
				return (src + i);
			i++;
		}
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_ch_atoi(char *str, int n)
{
	int total;
	int i;

	i = 0;
	total = 0;
	while (str[i] >= '0' && str[i] <= '9' && i <= n)
	{
		total *= 10;
		total += str[i] - '0';
		i++;
	}
	if (i != n)
		total = 0;
	return (total);
}
