/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:06:15 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 19:30:08 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	solv_print(char **grid, t_pos *a)
{
	int i;

	i = 0;
	algorithm(grid, a);
	print_map(grid, *a);
	free(grid);
}

int		main(int argc, char **argv)
{
	char	**grid;
	t_pos	a;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (i > 1)
				ft_putchar('\n');
			if (reading(argv[i++], &grid, &a, 0))
				ft_putstr("map error\n");
			else
				solv_print(grid, &a);
		}
	}
	else
	{
		if (reading(argv[i], &grid, &a, 1))
			ft_putstr("map error\n");
		else
			solv_print(grid, &a);
	}
	return (0);
}
