/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlaine <vlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:19:25 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 19:11:10 by vlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush01(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1)
			ft_line3(x, '/', '*', '\\');
		else if (n == y)
			ft_line3(x, '\\', '*', '/');
		else
			ft_line2(x, '*', ' ');
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
	rush01(x, y);
	return (0);
}
