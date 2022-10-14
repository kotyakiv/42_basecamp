/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:35:53 by ykot              #+#    #+#             */
/*   Updated: 2021/06/06 19:37:02 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(int argc, char **argv)
{
	int	sudoku[9][9];
	int	rev_sudoku[9][9];

	if (input_checking(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	read_sud(sudoku, argv);
	read_sud(rev_sudoku, argv);
	if (digits_checking(sudoku))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!solving(sudoku) || !rev_solving(rev_sudoku)
		|| compare(sudoku, rev_sudoku))
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
		print_sud(sudoku);
	return (0);
}
