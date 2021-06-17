/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:48:06 by jheiskan          #+#    #+#             */
/*   Updated: 2021/06/04 16:43:52 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		str_len;
	char	*str;

	str_len = 0;
	i = 1;
	while (i < argc)
		str_len += ft_strlen(argv[i++]) + 1;
	str = malloc((str_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 1;
	while (i + 1 < argc) //  2  5
	{
		ft_strcat(str, argv[i++]);
		ft_strcat(str, "\n");
	}
	ft_strcat(str, argv[i++]);
	return (str);
}
