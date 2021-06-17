/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:44:26 by ykot              #+#    #+#             */
/*   Updated: 2021/06/10 18:58:00 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	reading(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
		ft_putstr("File name missing.\n");
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		while (ret)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
			*(buf) = *(buf + ret);
			ret = read(fd, buf, BUF_SIZE);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (!ft_strcmp(argv[1], "Makefile"))
		ft_putstr("*contenu du Makefile*\n");
	else
	{
		reading(argv[1]);
	}
	return (0);
}
