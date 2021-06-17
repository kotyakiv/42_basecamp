/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:34:47 by jheiskan          #+#    #+#             */
/*   Updated: 2021/06/04 16:53:15 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_whi(char *str)
{
	int		len;
	int		len_whi;

	len = 0;
	len_whi = 0;
	while (str[len])
	{
		if (str[len] == '\t' || str[len] == ' ' || str[len] == '\n')
		{
			len_whi++;
			len++;
		}
		else
			len++;
	}
	return (len_whi + 1);
}

int		ft_strlen(char *str, int len)
{
	if (len != 0)
		len++;
	while (str[len])
	{
		if (str[len] == '\t' || str[len] == ' ' || str[len] == '\n')
			return (len);
		else
			len++;
	}
	return (len);
}

char	*str_copy(char *dest, char *src, int len)
{
	int		index;

	if (len != 0)
		len++;
	index = 0;
	while (src[len])
	{
		if (src[len] == '\t' || src[len] == ' ' ||
		src[len] == '\n' || src[len] == '\0')
			return (dest);
		else
		{
			dest[index++] = src[len++];
		}
	}
	dest[index] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		len;
	int		k;
	char	**ret;
	int		nb_wrd;

	k = 0;
	len = 0;
	nb_wrd = ft_strlen_whi(str);
	ret = malloc(nb_wrd * sizeof(char*));
	if (!ret)
		return (0);
	while (k < nb_wrd)
	{
		ret[k] = malloc(ft_strlen(str, len) - len + 1);
		if (!ret)
			return (0);
		ret[k] = str_copy(ret[k], str, len);
		len = ft_strlen(str, len);
		k++;
	}
	ret[k] = malloc(1);
	ret[k] = 0;
	return (ret);
}
