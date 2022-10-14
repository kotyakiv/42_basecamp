/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:23:07 by ykot              #+#    #+#             */
/*   Updated: 2021/06/08 20:35:22 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	logic(char *b, char *c)
{
	if (b[0] == '+' && ft_strlen(b) == 1)
		return (1);
	if (b[0] == '-' && ft_strlen(b) == 1)
		return (2);
	if (b[0] == '*' && ft_strlen(b) == 1)
		return (3);
	if (b[0] == '/' && ft_strlen(b) == 1)
	{
		if (ft_atoi(c) == 0)
			return (-1);
		else
			return (4);
	}
	if (b[0] == '%' && ft_strlen(b) == 1)
	{
		if (ft_atoi(c) == 0)
			return (-2);
		else
			return (5);
	}
	return (0);
}

int	counting(char *a, int o, char *b)
{
	if (o == 1)
		return (ft_atoi(a) + ft_atoi(b));
	if (o == 2)
		return (ft_atoi(a) - ft_atoi(b));
	if (o == 3)
		return (ft_atoi(a) * ft_atoi(b));
	if (o == 4)
		return (ft_atoi(a) / ft_atoi(b));
	if (o == 5)
		return (ft_atoi(a) % ft_atoi(b));
	return (0);
}

int	main(int argc, char **argv)
{
	int result;
	int log;

	result = 0;
	if (argc != 4)
		return (0);
	log = logic(argv[2], argv[3]);
	if (log == -1)
		ft_putstr("Stop : division by zero\n");
	else if (log == -2)
		ft_putstr("Stop : modulo by zero\n");
	else if (log == 0)
		return (0);
	else
	{
		result = counting(argv[1], log, argv[3]);
		ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
