/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:13:39 by ykot              #+#    #+#             */
/*   Updated: 2021/06/16 20:25:50 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		read_first_line(t_pos *a, char ***grid, t_read_var *r)
{
	int		i;
	char	first[14];

	i = 0;
	while (r->ret && r->buf != '\n')
	{
		first[i] = r->buf;
		r->ret = read(r->fd, &r->buf, 1);
		i++;
	}
	first[i] = '\0';
	initial_a(a, first);
	*grid = (char**)malloc(sizeof(char*) * a->lines);
	if (a->error)
		return (1);
	return (0);
}

void	memory_realloc(char **buffer, int *buf_size, int i)
{
	char	*temp;

	(*buffer[i]) = '\0';
	temp = (char*)malloc(sizeof(char) * (*buf_size));
	ft_strcpy(temp, *buffer);
	*buf_size *= 2;
	free(*buffer);
	*buffer = (char*)malloc(sizeof(char) * (*buf_size));
	ft_strcpy(*buffer, temp);
	free(temp);
}

void	read_second_line(t_pos *a, char ***grid, t_read_var *r)
{
	char	*buffer;
	int		buf_size;
	int		i;

	buf_size = 150;
	if (!(r->ret = read(r->fd, &r->buf, 1)))
	{
		a->error = 1;
		return ;
	}
	i = 0;
	buffer = (char*)malloc(sizeof(char) * buf_size);
	while (r->ret && r->buf != '\n')
	{
		buffer[i] = r->buf;
		r->ret = read(r->fd, &r->buf, 1);
		i++;
		a->columns = i;
		if (i + 1 == buf_size)
			memory_realloc(&buffer, &buf_size, i);
	}
	buffer[i] = '\0';
	(*grid)[0] = (char*)malloc(sizeof(char) * a->columns);
	ft_strcpy((*grid)[0], buffer);
	free(buffer);
}

int		read_other_lines(t_pos *a, char ***grid, t_read_var *r)
{
	int rows;
	int i;

	rows = 0;
	while (r->ret && ++rows < a->lines)
	{
		if (r->buf != '\n')
			return (1);
		if (rows != a->lines)
			(*grid)[rows] = (char*)malloc(sizeof(char) * (a->columns + 1));
		r->ret = read(r->fd, &r->buf, 1);
		i = 0;
		while (r->ret && r->buf != '\n')
		{
			(*grid)[rows][i++] = r->buf;
			r->ret = read(r->fd, &r->buf, 1);
		}
		if (rows != a->lines)
			(*grid)[rows][i] = '\0';
		if (a->columns != i && a->lines != rows)
			return (1);
	}
	if (checking_for_read_errors(r))
		return (1);
	return (0);
}

int		reading(char *str, char ***grid, t_pos *a, int no_arg)
{
	t_read_var	r;

	if (!no_arg)
	{
		r.fd = open(str, O_RDONLY);
		if (r.fd == -1)
			return (1);
	}
	if (no_arg)
		r.fd = 0;
	r.ret = read(r.fd, &r.buf, 1);
	if (!r.ret)
		return (1);
	if (read_first_line(a, grid, &r))
		return (1);
	read_second_line(a, grid, &r);
	if (a->error)
		return (1);
	if (read_other_lines(a, grid, &r))
		return (1);
	if (checking_right_char((*grid), *a))
		return (1);
	if (!no_arg)
		close(r.fd);
	return (0);
}
