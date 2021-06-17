/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:17:08 by ykot              #+#    #+#             */
/*   Updated: 2021/06/09 20:20:56 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	if (!begin_list)
		return ;
	temp = begin_list;
	(*f)(temp->data);
	while (temp->next)
	{
		temp = temp->next;
		(*f)(temp->data);
	}
}
