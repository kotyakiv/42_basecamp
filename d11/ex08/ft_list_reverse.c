/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:00:05 by ykot              #+#    #+#             */
/*   Updated: 2021/06/09 20:15:59 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*new;

	if (!(*begin_list))
		return (NULL);
	temp = *begin_list;
	if (!temp->next)
		return (temp);
	while (temp->next)
	{
		new = temp;
		
	}
}
