/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:44:19 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/10 05:55:37 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft_cat.h"

int		main(int ac, char **av)
{
	int		result;
	char	buf[30000];

	if (ac > 1)
	{
		av++;
		result = cat_files(av, buf);
	}
	else
		result = cat_input(buf);
	return (result);
}

int		cat_files(char **files, char *buf)
{
	int		errors;

	errors = 0;
	while (*files)
	{
		if (open(*files, O_RDONLY) == 3)
		{
			buf[0] = '\0';
			while (read(3, buf, sizeof(char)) != 0)
				ft_putstr(1, buf);
			buf = clear_buf(buf);
			close(3);
		}
		else
		{
			print_error(*files, errno);
			errors += 1;
		}
		files++;
	}
	return (errors);
}

int		cat_input(char *buf)
{
	int		bytes;

	while (1)
	{
		bytes = read(0, buf, 30000);
		ft_putstr(1, buf);
		if (buf[bytes] < 0)
			break ;
		buf = clear_buf(buf);
	}
	return (0);
}

char	*clear_buf(char *buf)
{
	while (*buf)
	{
		*buf = '\0';
		buf++;
	}
	return (buf);
}
