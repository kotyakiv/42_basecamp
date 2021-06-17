/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:17:42 by ykot              #+#    #+#             */
/*   Updated: 2021/05/28 06:13:39 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		index2;
	char	*newstr;
	char	temp;

	newstr = str;
	index = 0;
	index2 = 0;
	while (*str != '\0')
	{
		index++;
		str++;
	}
	str = newstr;
	while (index2 < index / 2)
	{
		temp = str[index2];
		str[index2] = str[index - index2 - 1];
		str[index - index2 - 1] = temp;
		index2++;
	}
	return (str);
}
