/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:58:45 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:16:07 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	rush_i_00(int x, int y)
{
	int	n;

	g_counter = 0;
	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
			ft_i_line2(x, 'o', '-');
		else
			ft_i_line2(x, '|', ' ');
		ft_readchar('\n');
		n++;
	}
	ft_readchar('\0');
}

void	rush_i_01(int x, int y)
{
	int	n;

	g_counter = 0;
	n = 1;
	while (n <= y)
	{
		if (n == 1)
			ft_i_line3(x, '/', '*', '\\');
		else if (n == y)
			ft_i_line3(x, '\\', '*', '/');
		else
			ft_i_line2(x, '*', ' ');
		ft_readchar('\n');
		n++;
	}
}

void	rush_i_02(int x, int y)
{
	int	n;

	g_counter = 0;
	n = 1;
	while (n <= y)
	{
		if (n == 1)
			ft_i_line2(x, 'A', 'B');
		else if (n == y)
			ft_i_line2(x, 'C', 'B');
		else
			ft_i_line2(x, 'B', ' ');
		ft_readchar('\n');
		n++;
	}
}

void	rush_i_03(int x, int y)
{
	int	n;

	g_counter = 0;
	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
			ft_i_line3(x, 'A', 'B', 'C');
		else
			ft_i_line2(x, 'B', ' ');
		ft_readchar('\n');
		n++;
	}
}

void	rush_i_04(int x, int y)
{
	int n;

	g_counter = 0;
	n = 1;
	while (n <= y)
	{
		if (n == 1)
			ft_i_line3(x, 'A', 'B', 'C');
		else if (n == y)
			ft_i_line3(x, 'C', 'B', 'A');
		else
			ft_i_line2(x, 'B', ' ');
		ft_readchar('\n');
		n++;
	}
}
