/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:29:44 by ykot              #+#    #+#             */
/*   Updated: 2021/06/08 17:38:22 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	temp = (*begin_list)->next;
	while (temp)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
	}
}
