/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:17:08 by ykot              #+#    #+#             */
/*   Updated: 2021/06/08 17:08:57 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*new;
	int		i;

	list = NULL;
	if (ac == 1)
		return (0);
	i = 1;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = list;
		list = new;
		i++;
	}
	return (list);
}
