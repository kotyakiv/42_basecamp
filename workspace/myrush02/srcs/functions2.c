/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:48:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:18:50 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_prntnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 10)
		ft_prntnbr(nbr / 10);
	c = nbr % 10 + '0';
	ft_putchar(c);
}

void	ft_readchar(char c)
{
	g_buf[g_counter] = c;
	g_counter++;
}

void	ft_i_line2(int x, char a, char b)
{
	int	n;

	n = 1;
	while (n <= x)
	{
		if (n == 1 || n == x)
			ft_readchar(a);
		else
			ft_readchar(b);
		n++;
	}
}

void	ft_i_line3(int x, char a, char b, char c)
{
	int n;

	n = 1;
	while (n <= x)
	{
		if (n == 1)
			ft_readchar(a);
		else if (n == x)
			ft_readchar(c);
		else
			ft_readchar(b);
		n++;
	}
}
