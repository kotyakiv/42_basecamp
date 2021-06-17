/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:18:18 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/09 17:13:28 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	count = 0;
	list = begin_list;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
