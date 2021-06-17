/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:56:05 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 12:58:44 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_line3(int x, char a, char b, char c)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(a);
		else if (i == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
}

void	rush04(int x, int y)
{
	int n;

	n = 1;
	while (n <= y)
	{
		if (n == 1)
			
		ft_putchar('\n');
		n++;
	}
}

int		main(int argc, char **argv)
{
	int x;
	int y;
	
	if (argc != 3 || ch_atoi(argv[1], &x) || ch_atoi(argv[2], &y)
		|| x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return (0);
	}
	rush04(x, y);
	return (0);
}