/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:35:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/12 18:53:56 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char a, char b)
{
	int n;

	n = 1;
	while (n <= x)
	{
		if (n == 1 || n == x)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		n++;
	}
}

void	rush(int x, int y)
{
	int n;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	n = 1;
	while (n <= y)
	{
		if (n == 1 || n == y)
		{
			ft_line(x, 'o', '-');
		}
		else
		{
			ft_line(x, '|', ' ');
		}
		ft_putchar('\n');
		n++;
	}
}

