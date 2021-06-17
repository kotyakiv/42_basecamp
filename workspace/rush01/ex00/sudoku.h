/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:43:04 by ykot              #+#    #+#             */
/*   Updated: 2021/06/09 18:48:22 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);
int		input_checking(int argc, char **argv);
void	read_sud(int sudoku[9][9], char **argv);
void	print_sud(int sudoku[9][9]);
int		sub_digits_checking(int sudoku[9][9], int i, int j);
int		digits_checking(int sudoku[9][9]);
int		sud_full(int sudoku[9][9]);
int		sub_solving(int sudoku[9][9], int i, int j, int k);
int		solving(int sudoku[9][9]);
int		rev_solving(int sudoku[9][9]);
int		compare(int sudoku[9][9], int rev_sudoku[9][9]);

#endif
