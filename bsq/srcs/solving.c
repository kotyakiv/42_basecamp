/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:08:24 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 20:09:44 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	logic_initial(t_log *b)
{
	b->n = 0;
	b->stop = 1;
	b->r = 0;
	b->c = 0;
}

void	max_value(t_pos *a, t_log b, int i, int j)
{
	a->value = b.n;
	a->max_row = i;
	a->max_col = j;
}

void	logic(char **grid, t_pos *a, int i, int j)
{
	t_log b;

	logic_initial(&b);
	while (b.stop)
	{
		b.r = 0;
		while (b.r <= b.n)
		{
			if (i + b.r >= a->lines)
				b.stop = 0;
			b.c = 0;
			while (b.c <= b.n && b.stop)
			{
				if (j + b.c >= a->columns)
					b.stop = 0;
				if (grid[i + b.r][j + b.c] != a->empty)
					b.stop = 0;
				b.c++;
			}
			b.r++;
		}
		b.n++;
	}
	if (--b.n > a->value)
		max_value(a, b, i, j);
}

void	algorithm(char **grid, t_pos *a)
{
	int i;
	int j;

	i = 0;
	while (i < a->lines)
	{
		j = 0;
		while (j < a->columns)
		{
			if (grid[i][j] == a->empty)
				logic(grid, a, i, j);
			j++;
		}
		i++;
	}
}

void	print_map(char **grid, t_pos a)
{
	int i;
	int j;

	i = 0;
	while (i < a.lines)
	{
		j = 0;
		while (j < a.columns)
		{
			if ((i >= a.max_row && i < a.max_row + a.value)
				&& (j >= a.max_col && j < a.max_col + a.value))
				ft_putchar(a.full);
			else
				ft_putchar(grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
