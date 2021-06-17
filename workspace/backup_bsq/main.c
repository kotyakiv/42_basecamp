/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:06:15 by ykot              #+#    #+#             */
/*   Updated: 2021/06/15 13:43:22 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(int argc, char **argv)
{
	char	grid[10][100];
	int 	lines = 0;
	int 	col = 0;
	t_pos	a;
	
	a.value = 0;
	a.row = 0;
	a.col = 0;
	
	if (argc > 1)
	{
		if (reading(argv[1], grid, &lines, &col))
			return (0);
	}
	else
	{
		ft_putstr("No arguments\n");
	}
	if (algorithm(grid, lines, col, &a))
		return (0);
	print_map(grid, a, lines, col);
	return (0);
}
