/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:36:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/03 14:40:49 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

void	mystrcat(char *str, char *ar, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (j < size)
		str[i++] = ar[j++];
	str[i - 1] = '\n';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		size;
	char	*str;

	if (argc == 1)
	{
		str = (char*)malloc(1);
		str[0] = '\0';
		return (str);
	}
	size = 0;
	i = 1;
	while (i < argc)
		size += length(argv[i++]) + 1;
	str = (char*)malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
		str[i++] = '\0';
	i = 0;
	while (++i < argc)
		mystrcat(str, argv[i], length(argv[i]) + 1);
	str[size - 1] = '\0';
	return (str);
}
