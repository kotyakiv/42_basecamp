/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:06:15 by ykot              #+#    #+#             */
/*   Updated: 2021/06/15 18:22:39 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int main(int argc, char **argv)
{
	char	grid[10][100];
	t_pos	a;
	int i;
	
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (reading(argv[i], grid, &a, 0))
			{
				ft_putstr("map error\n");
				return (1);
			}
			if (algorithm(grid, &a))
				return (1);
			print_map(grid, a);
			i++;
		}		
	}
	else
	{
		if (reading(argv[i], grid, &a, 1))
		{
			ft_putstr("map error\n");
			return (1);
		}
		if (algorithm(grid, &a))
			return (1);
		print_map(grid, a);
	}
	return (0);
}
