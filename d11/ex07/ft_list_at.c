/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:42:47 by ykot              #+#    #+#             */
/*   Updated: 2021/06/08 17:55:08 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;

	if (!begin_list)
		return (0);
	if (nbr == 1)
		return (begin_list);
	i = 1;
	temp = begin_list;
	while (i++ < nbr)
		temp = temp->next;
	return (temp);
}
