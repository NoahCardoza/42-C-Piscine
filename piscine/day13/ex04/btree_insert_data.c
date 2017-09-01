/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 02:27:30 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/25 23:39:56 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree *node;

	node = *root;
	if (!node)
		node = btree_create_node(item);
	else
	{
		if ((*cmpf)(item, node->item) < 0)
			btree_insert_data(&node->left, item, cmpf);
		else
			btree_insert_data(&node->right, item, cmpf);
	}
}
