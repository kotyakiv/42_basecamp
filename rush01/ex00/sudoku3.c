/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:38:53 by ykot              #+#    #+#             */
/*   Updated: 2021/06/09 18:48:41 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		sud_full(int sudoku[9][9])
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j] == 0)
				flag = 1;
			j++;
		}
		i++;
	}
	if (flag)
		return (0);
	else
		return (1);
}

int		sub_solving(int sudoku[9][9], int i, int j, int k)
{
	sudoku[i][j] = k;
	if (digits_checking(sudoku))
		sudoku[i][j] = 0;
	else if (solving(sudoku))
		return (1);
	return (0);
}

int		solving(int sudoku[9][9])
{
	int i;
	int j;
	int k;


	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (!sudoku[i][j])
			{
				k = 0;
				while (++k <= 9)
					if (sub_solving(sudoku, i, j, k))
						return (1);
				sudoku[i][j] = 0;
				return (0);
			}
		}
	}
	if (sud_full(sudoku))
		return (1);
	return (0);
}

int		rev_solving(int sudoku[9][9])
{
	int i;
	int j;
	int k;

	if (sud_full(sudoku))
		return (1);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			if (!sudoku[i][j])
			{
				k = 10;
				while (--k >= 1)
					if (sub_solving(sudoku, i, j, k))
						return (1);
				sudoku[i][j] = 0;
				return (0);
			}
		}
	}
	if (sud_full(sudoku))
		return (1);
	return (0);
}

int		compare(int sudoku[9][9], int rev_sudoku[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (sudoku[i][j] != rev_sudoku[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
