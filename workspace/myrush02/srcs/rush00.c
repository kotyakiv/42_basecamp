/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:35:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:05:49 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush00(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
			ft_line2(x, 'o', '-');
		else
			ft_line2(x, '|', ' ');
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
	rush00(x, y);
	return (0);
}
