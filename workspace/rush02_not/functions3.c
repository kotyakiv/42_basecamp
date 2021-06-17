/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 17:01:12 by ykot              #+#    #+#             */
/*   Updated: 2021/06/13 17:08:07 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	read_x_y(const char *buf, int *x, int *y)
{
	int i;
	int j;

	*y = 0;
	*x = 0;
	i = 0;
	j = 0;
	while (buf[i])
	{
		j++;
		if (buf[i] == '\n')
		{
			*y += 1;
			*x = j - 1;
			j = 0;
		}
		i++;
	}
}

void	read_input(char *buf2)
{
	int		i;
	int		ret;
	char	buf;

	i = 0;
	ret = read(0, &buf, 1);
	while (ret)
	{
		buf2[i] = buf;
		ret = read(0, &buf, 1);
		i++;
	}
	buf2[i] = '\0';
}

void	check_rushes(char *buf, int x, int y, int result[5])
{
	g_buf = (char *)malloc(sizeof(char) * (x + 1) * (y));
	rush_i_00(x, y);
	if (ft_strcmp(buf, g_buf) == 0)
		result[0] = 1;
	rush_i_01(x, y);
	if (ft_strcmp(buf, g_buf) == 0)
		result[1] = 1;
	rush_i_02(x, y);
	if (ft_strcmp(buf, g_buf) == 0)
		result[2] = 1;
	rush_i_03(x, y);
	if (ft_strcmp(buf, g_buf) == 0)
		result[3] = 1;
	rush_i_04(x, y);
	if (ft_strcmp(buf, g_buf) == 0)
		result[4] = 1;
	free(g_buf);
}

int		no_result(int result[5])
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (result[i])
			return (0);
		i++;
	}
	return (1);
}
