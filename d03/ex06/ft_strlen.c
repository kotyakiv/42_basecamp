/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:24:52 by ykot              #+#    #+#             */
/*   Updated: 2021/05/29 11:20:46 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int		ft_strlen(char *str)
{
	int index;

	index = 0;
	while (*str != '\0')
	{
		index++;
		str++;
	}
	return (index);
}