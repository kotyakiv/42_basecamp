/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:58:26 by ykot              #+#    #+#             */
/*   Updated: 2021/06/10 08:24:50 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*inner_ptr;

	inner_ptr = *begin_list;
	
	new = ft_create_elem(data);
	
	if (!(*begin_list))
		*begin_list = new;
	else
	{
		while (inner_ptr->next)
			inner_ptr = inner_ptr->next;
			
		inner_ptr->next = new;
	}
}
