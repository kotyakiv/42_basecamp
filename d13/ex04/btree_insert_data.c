/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykot <ykot@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:11:12 by ykot              #+#    #+#             */
/*   Updated: 2021/06/11 19:46:22 by ykot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *))
{
	t_btree **current;

	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	current = root;
	if ((*cmpf)((*current)->item, item) > 0)
	{
		if ((*current)->left)
			btree_insert_data(&(*current)->left, item, cmpf);
		else
			(*current)->left = btree_create_node(item);
	}
	else
	{
		if ((*current)->right)
			btree_insert_data(&(*current)->right, item, cmpf);
		else
			(*current)->right = btree_create_node(item);
	}
}
