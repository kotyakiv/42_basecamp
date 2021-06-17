/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:59:43 by jheiskan          #+#    #+#             */
/*   Updated: 2021/06/03 18:00:25 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tmpptr;

	i = 0;
	if (min >= max)
	{
		tmpptr = NULL;
		return (0);
	}
	tmpptr = malloc((max - min) * sizeof(int));
	if (!tmpptr)
		return (0);
	while (min < max)
	{
		tmpptr[i] = min;
		min++;
		i++;
	}
	*range = tmpptr;
	return (i);
}
