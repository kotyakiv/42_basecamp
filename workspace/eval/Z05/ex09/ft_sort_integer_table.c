/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:41:30 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/05/28 20:00:08 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int index;
	int temp;
	int done;

	done = 0;
	while (done == 0)
	{
		done = 1;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				temp = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = temp;
				done = 0;
			}
			index++;
		}
	}
}
