/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 05:27:34 by ccariou           #+#    #+#             */
/*   Updated: 2021/06/09 09:10:23 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int index;

	index = 0;
	while (index < length - 1)
	{
		if ((*f)(tab[index], tab[index + 1]) > 0)
			return (0);
		index++;
	}
	return (1);
}
