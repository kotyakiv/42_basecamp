/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:26:52 by ykot              #+#    #+#             */
/*   Updated: 2021/06/03 13:08:14 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nb_words(char *c)
{
	int i;
	int n;
	int flag;

	n = 0;
	i = 0;
	flag = 1;
	while (c[i] != '\0')
	{
		if (c[i] >= 33 && c[i] <= 126 && flag)
		{
			flag = 0;
			n++;
		}
		if (!(c[i] >= 33 && c[i] <= 126 && !flag))
		{
			flag = 1;
		}
		i++;
	}
	return (n);
}

char	*strcut(char *src, int *cnt)
{
	int		i;
	int		l;
	int		j;
	char	*str;

	while (!(src[*cnt] >= 33 && src[*cnt] <= 126))
		(*cnt)++;
	j = *cnt;
	l = 0;
	while (src[*cnt] >= 33 && src[*cnt] <= 126)
	{
		l++;
		(*cnt)++;
	}
	str = (char*)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (i < *cnt - j)
	{
		str[i] = src[*cnt - l + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split_whitespaces(char *str)
{
	int		cnt;
	int		nb;
	int		i;
	char	**lines;

	cnt = 0;
	nb = nb_words(str);
	lines = (char**)malloc(sizeof(char*) * (nb + 1));
	i = 0;
	while (i < nb)
	{
		lines[i] = strcut(str, &cnt);
		i++;
	}
	lines[i] = 0;
	return (lines);
}
