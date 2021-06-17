/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 09:26:52 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/10 10:29:07 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (*root == NULL)
	{
		*root = btree_create_node(item);
	}
	else
	{
		if (cmpf((*root)->item, item) == -1)
			btree_insert_data(&(*root)->right, item, cmpf);
		else
			btree_insert_data(&(*root)->left, item, cmpf);
	}
}
