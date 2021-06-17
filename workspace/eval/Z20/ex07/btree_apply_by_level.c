/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 09:03:46 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/06/11 10:16:21 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int g_first = 1;

int		btree_level_count(t_btree *root)
{
	int	size;
	int	left;
	int	right;

	if (root == NULL)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	if (left > right)
		size = 1 + left;
	else
		size = 1 + right;
	return (size);
}

void	apply_to_level(t_btree *root, int level, int current,
void (*applyf)(void *item, int current_level, int is_first))
{
	if (root == NULL)
		return ;
	else if (level == 0)
	{
		applyf(root->item, current, g_first);
		g_first = 0;
	}
	else
	{
		apply_to_level(root->left, level - 1, current, applyf);
		apply_to_level(root->right, level - 1, current, applyf);
	}
}

void	btree_apply_by_level(t_btree *root,
void (*applyf)(void *item, int current_level, int is_first))
{
	int levels;
	int index;

	levels = btree_level_count(root);
	index = 0;
	while (index < levels)
	{
		g_first = 1;
		apply_to_level(root, index, index, applyf);
		index++;
	}
}
