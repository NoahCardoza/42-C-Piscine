/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 00:53:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 14:34:30 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *tmp;

	if (*begin_list)
	{
		node = *begin_list;
		while (node->next)
		{
			tmp = node;
			node = node->next;
			free(tmp);
		}
		*begin_list = NULL;
	}
}
