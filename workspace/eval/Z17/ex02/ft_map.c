/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:38:45 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/09 14:14:19 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *palautus;
	int i;

	i = 0;
	palautus = (int *)malloc(sizeof(int) * length);

	while (i < length)
	{
		palautus[i] = f(tab[i]);
		i++;
	}
	return (palautus);
}
