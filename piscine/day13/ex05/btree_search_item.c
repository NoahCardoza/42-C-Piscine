/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 02:35:07 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/25 23:33:59 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	if (root)
	{
		btree_search_item(root->left, data_ref, cmpf);
		if (!(*cmpf)(root->item, data_ref))
			return (root->item);
		btree_search_item(root->right, data_ref, cmpf);
	}
	return ((void*)(0));
}
