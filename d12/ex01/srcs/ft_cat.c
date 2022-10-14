/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:06:13 by ykot              #+#    #+#             */
/*   Updated: 2021/06/11 07:31:43 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	reading(char *name, char *buf)
{
	int		fd;
	int		ret;

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("cat: ");
		ft_putstr(name);
		ft_putstr(": No such file or directory\n");
	}
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		while (ret)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
			*buf = *(buf + ret);
			ret = read(fd, buf, BUF_SIZE);
		}
		close(fd);
	}
}

void	echo(char *buf)
{
	int		ret;

	while (1)
	{
		ret = read(1, buf, 10);
		buf[ret] = '\0';
		write(1, buf, ret);
	}
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		i;

	if (argc == 1)
		echo(buf);
	if (argc == 2)
		reading(argv[1], buf);
	else
	{
		i = 1;
		while (i < argc)
		{
			reading(argv[i], buf);
			i++;
		}
	}
	return (0);
}
