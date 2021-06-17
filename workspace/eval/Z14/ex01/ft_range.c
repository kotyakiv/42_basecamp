/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheiskan <jheiskan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:01:17 by jheiskan          #+#    #+#             */
/*   Updated: 2021/06/02 19:20:15 by jheiskan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
