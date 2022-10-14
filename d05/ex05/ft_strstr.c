/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:39:07 by ykot              #+#    #+#             */
/*   Updated: 2021/06/01 12:00:35 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int j;

	j = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			n = i;
			while (str[i++] == to_find[j++])
			{
				if (to_find[j] == '\0')
				{
					return (str + n);
				}
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
