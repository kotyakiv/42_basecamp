/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:49:40 by ykot              #+#    #+#             */
/*   Updated: 2021/06/15 19:31:12 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_poistion
{
	int max_row;
	int max_col;
	int value;
	int lines;
	int columns;
	char obstacle;
	char empty;
	char full;
}				t_pos;

typedef struct s_logic
{
	int n;
	int stop;
	int r;
	int c;
}				t_log;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

void 	initial_a(t_pos *a, char *first);
int  	checking_right_char(char grid[10][100], t_pos a);
int 	reading(char *str, char grid[10][100], t_pos *a, int no_arg);

int		algorithm(char	grid[10][100], t_pos *a);
void	print_map(char grid[10][100], t_pos a);
void 	logic(char	grid[10][100], t_pos *a, int i, int j);
void 	logic_initial(t_log *b);
void 	max_value(t_pos *a, t_log b, int i, int j);

#endif
