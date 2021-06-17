/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:08:35 by ykot              #+#    #+#             */
/*   Updated: 2021/06/01 08:49:12 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		if_low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		if_up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	to_low(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
	return (*c);
}

char	to_up(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return (*c);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (if_low(str[i]))
		to_up(&str[i]);
	i++;
	while (str[i] != '\0')
	{
		if (!(if_low(str[i - 1]) || if_up(str[i - 1])
			|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			if (if_low(str[i]))
				to_up(&str[i]);
		if (if_up(str[i - 1]))
			to_low(&str[i]);
		if (if_low(str[i - 1]))
			to_low(&str[i]);
		i++;
	}
	return (str);
}
