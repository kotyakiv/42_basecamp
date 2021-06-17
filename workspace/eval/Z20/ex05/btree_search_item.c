/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:30:40 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/10 11:53:42 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *))
{
	t_btree	*temp;

	if (root == NULL)
		return (NULL);
	temp = btree_search_item(root->left, data_ref, cmpf);
	if (temp)
		return (temp);
	if (cmpf(root->item, data_ref))
		return (root);
	temp = btree_search_item(root->right, data_ref, cmpf);
	return (temp);
}
