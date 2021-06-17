/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:36:39 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:05:55 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush02(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1)
			ft_line2(x, 'A', 'B');
		else if (n == y)
			ft_line2(x, 'C', 'B');
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
		ft_putchar('\n');
		return (0);
	}
	rush02(x, y);
	return (0);
}
