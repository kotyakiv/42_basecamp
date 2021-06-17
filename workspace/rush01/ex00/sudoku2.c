/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:36:45 by ykot              #+#    #+#             */
/*   Updated: 2021/06/09 18:43:20 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	sub_digits_checking(int sudoku[9][9], int i, int j)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (r < 3)
	{
		c = 0;
		while (c < 3)
		{
			if (sudoku[i][j] == sudoku[(i / 3) * 3 + r][(j / 3) * 3 + c] &&
				sudoku[i][j] != 0 &&
				(i != (i / 3) * 3 + r && j != (j / 3) * 3 + c))
				return (1);
			c++;
		}
		r++;
	}
	return (0);
}

int	digits_checking(int sudoku[9][9])
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			while (k < 9)
			{
				if (sudoku[i][j] == sudoku[i][k] && k != j && sudoku[i][j] != 0)
					return (1);
				if (sudoku[i][j] == sudoku[k][j] && k != i && sudoku[i][j] != 0)
					return (1);
				k++;
			}
			if (sub_digits_checking(sudoku, i, j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
