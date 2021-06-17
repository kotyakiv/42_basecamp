/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:44:43 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/09 09:02:56 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int index;
	int *values;

	values = (int *)malloc(sizeof(int) * length);
	if (!values)
		return (0);

	index = 0;
	while (index < length)
	{
		values[index] = (*f)(tab[index]);
		index++;
	}
	return (values);
}
