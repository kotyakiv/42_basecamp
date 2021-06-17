/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:41:42 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/05/28 18:42:58 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int count;
	int index;
	int number;
	int temp;
	int position;

	count = 0;
	index = 0;
	number = 0;
	while (str[++count] != '\0')
	{
	}
	while (index != count)
	{
		temp = str[index] - '0';
		position = count - index;
		while (position > 1)
		{
			temp = temp * 10;
			position--;
		}
		number = number + temp;
		index++;
	}
	return (number);
}
