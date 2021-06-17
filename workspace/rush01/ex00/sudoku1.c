/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:36:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/06 17:48:45 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		ft_putchar(c[i++]);
}

int		input_checking(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 10)
		return (1);
	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!((argv[i][j] >= '1' && argv[i][j] <= '9') ||
				argv[i][j] == '.'))
				return (1);
			j++;
		}
		if (j != 9)
			return (1);
		i++;
	}
	return (0);
}

void	read_sud(int sudoku[9][9], char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9')
				sudoku[i][j] = (int)(argv[i + 1][j] - '0');
			else
				sudoku[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_sud(int sudoku[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(sudoku[i][j] + '0');
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
