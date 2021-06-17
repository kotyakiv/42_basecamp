/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 05:22:16 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/10 18:41:29 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "ft_cat.h"

void	print_error(char *file, int err)
{
	ft_putstr(2, "cat: ");
	ft_putstr(2, file);
	ft_putstr(2, ": ");
	ft_putstr(2, str_error(err));
	ft_putchar(2, '\n');
}

char	*str_error(int err)
{
	if (err == ENOENT)
		return ("No such file or directory");
	if (err == EIO)
		return ("I/O error");
	if (err == ENXIO)
		return ("No such device or address");
	if (err == E2BIG)
		return ("Arg list too long");
	if (err == EBADF)
		return ("Bad file number");
	if (err == ENOMEM)
		return ("Not enough core");
	if (err == EACCES)
		return ("Permission denied");
	if (err == EFAULT)
		return ("Bad address");
	if (err == ENOTBLK)
		return ("Block device required");
	if (err == EBUSY)
		return ("Mount device busy");
	if (err == EXDEV)
		return ("Cross-device link");
	return (str_error_cont(err));
}

char	*str_error_cont(int err)
{
	if (err == ENODEV)
		return ("No such device");
	if (err == ENOTDIR)
		return ("Not a directory");
	if (err == EISDIR)
		return ("Is a directory");
	if (err == EINVAL)
		return ("Invalid argument");
	if (err == ENFILE)
		return ("Too many open files in system");
	if (err == EMFILE)
		return ("Too many open files");
	if (err == ENOTTY)
		return ("Not a typewriter");
	if (err == ETXTBSY)
		return ("Text file busy");
	if (err == EFBIG)
		return ("File too large");
	if (err == ESPIPE)
		return ("Illegal seek");
	if (err == EMLINK)
		return ("Too many links");
	return (str_error_more(err));
}

char	*str_error_more(int err)
{
	if (err == EPIPE)
		return ("Broken pipe");
	ft_putnbr(2, err);
	ft_putstr(2, ": ");
	return ("Unknown error");
}
