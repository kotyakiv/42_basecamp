/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:11:02 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:05:27 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_ch_atoi(char *str, int *n)
{
	int	number;
	int	i;
	int minus;

	minus = 1;
	number = 0;
	i = 0;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	if (!(str[i] >= '1' && str[i] <= '9'))
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	*n = minus * number;
	return (0);
}

void	ft_line2(int x, char a, char b)
{
	int n;

	n = 1;
	while (n <= x)
	{
		if (n == 1 || n == x)
			ft_putchar(a);
		else
			ft_putchar(b);
		n++;
	}
}

void	ft_line3(int x, char a, char b, char c)
{
	int n;

	n = 1;
	while (n <= x)
	{
		if (n == 1)
			ft_putchar(a);
		else if (n == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		n++;
	}
}
