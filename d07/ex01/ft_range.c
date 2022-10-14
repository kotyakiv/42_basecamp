/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:54:33 by ykot              #+#    #+#             */
/*   Updated: 2021/06/04 17:55:18 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*array;
	int			i;
	long long	outofr;

	outofr = max - min;
	if (outofr <= 0 || outofr > 2147483647)
		return (0);
	array = (int*)malloc(sizeof(int) * (max - min));
	if (!array)
		return (0);
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
