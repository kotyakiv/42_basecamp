/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:07:18 by ykot              #+#    #+#             */
/*   Updated: 2021/06/04 18:00:00 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			size;
	int			i;
	long long	outofr;

	outofr = max - min;
	if (outofr <= 0 || outofr > 2147483647)
	{
		*range = 0;
		return (0);
	}
	size = outofr;
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
		return (0);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
