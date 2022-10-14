/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:53:07 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:41:32 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_rush_names(int i, int x, int y)
{
	ft_putstr("[");
	ft_putstr("rush-0");
	ft_prntnbr(i);
	ft_putstr("] [");
	ft_prntnbr(x);
	ft_putstr("] [");
	ft_prntnbr(y);
	ft_putstr("]");
}

void	print_result(int result[5], int x, int y)
{
	int i;
	int next;

	next = 0;
	i = 0;
	if (no_result(result))
	{
		ft_putstr("aucune\n");
		return ;
	}
	while (i < 5)
	{
		if (result[i])
		{
			if (next)
				ft_putstr(" || ");
			print_rush_names(i, x, y);
			next = 1;
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	char	buf[BUF_SIZE];
	int		x;
	int		y;
	int		result[5];
	int		i;

	i = 0;
	while (i < 5)
	{
		result[i] = 0;
		i++;
	}
	if (read_input(buf))
	{
		ft_putstr("aucune\n");
		return (0);
	}
	read_x_y(buf, &x, &y);
	check_rushes(buf, x, y, result);
	print_result(result, x, y);
	return (0);
}
