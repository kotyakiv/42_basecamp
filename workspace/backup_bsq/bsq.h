/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:49:40 by ykot              #+#    #+#             */
/*   Updated: 2021/06/15 13:01:42 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_poistion
{
	int row;
	int col;
	int value;
}				t_pos;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int 	reading(char *str, char grid[10][100], int *lines, int *col);
int		algorithm(char	grid[10][100], int lines, int col, t_pos *a);
void	print_map(char grid[10][100], t_pos a, int lines, int col);

#endif
