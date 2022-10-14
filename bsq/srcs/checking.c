/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:07:15 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 20:34:30 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		check_same_char(t_pos *a)
{
	if (a->full == a->obstacle || a->full == a->empty)
		return (1);
	if (a->empty == a->obstacle)
		return (1);
	return (0);
}

void	initial_a(t_pos *a, char *first)
{
	int i;

	i = 0;
	a->max_row = 0;
	a->max_col = 0;
	a->value = 0;
	a->lines = 0;
	a->columns = 0;
	a->error = 0;
	i = ft_strlen(first) - 1;
	a->full = first[i--];
	a->obstacle = first[i--];
	a->empty = first[i];
	a->lines = ft_ch_atoi(first, i);
	if (a->lines <= 0)
		a->error = 1;
	if (check_same_char(a))
		a->error = 1;
}

int		checking_right_char(char **grid, t_pos a)
{
	int i;
	int j;

	i = 0;
	while (i < a.lines)
	{
		j = 0;
		while (j < a.columns)
		{
			if (grid[i][j] != a.obstacle && grid[i][j] != a.empty)
				return (1);
			j++;
		}
		i++;
	}
	if (a.columns == 0)
		return (1);
	return (0);
}

int		checking_for_read_errors(t_read_var *r)
{
	if (r->buf != '\n')
		return (1);
	r->ret = read(r->fd, &r->buf, 1);
	if (r->ret)
		return (1);
	return (0);
}
