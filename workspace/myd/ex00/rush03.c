/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaine <vlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:39:12 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 19:11:20 by vlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush03(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
			ft_line3(x, 'A', 'B', 'C');
		else
			ft_line2(x, 'B', ' ');
		ft_putchar('\n');
		n++;
	}
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc != 3 || ft_ch_atoi(argv[1], &x) || ft_ch_atoi(argv[2], &y)
		|| x <= 0 || y <= 0)
	{
		return (0);
	}
	rush03(x, y);
	return (0);
}
