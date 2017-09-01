/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 02:45:43 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/25 23:40:44 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int x;
	int y;

	if (!root)
	{
		x = btree_level_count(root->left);
		y = btree_level_count(root->right);
		return (1 + (x > y ? x : y));
	}
	return (0);
}
