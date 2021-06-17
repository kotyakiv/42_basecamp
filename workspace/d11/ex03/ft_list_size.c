/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:47:13 by ykot              #+#    #+#             */
/*   Updated: 2021/06/08 15:55:24 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	i = 1;
	temp = begin_list;
	if (!temp)
		return (0);
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
