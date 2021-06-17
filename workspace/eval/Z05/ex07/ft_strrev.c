/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:48:00 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/05/28 07:53:51 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		count;
	char	temp;

	index = 0;
	count = 0;
	while (str[count + 1] != '\0')
	{
		count++;
	}
	while (index <= count / 2)
	{
		temp = str[count - index];
		str[count - index] = str[index];
		str[index] = temp;
		index++;
	}
	return (str);
}
