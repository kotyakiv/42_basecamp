/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:24:50 by ykot              #+#    #+#             */
/*   Updated: 2021/06/07 19:47:00 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *new_arr;
	int i;

	if (length <= 0)
		return (0);
	else
	{
		new_arr = (int*)malloc(sizeof(int) * length);
		if (!new_arr)
			return (0);
	}
	i = 0;
	while (i < length)
	{
		new_arr[i] = (*f)(tab[i]);
		i++;
	}
	return (new_arr);
}
