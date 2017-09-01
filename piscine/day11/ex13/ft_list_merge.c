/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 05:46:46 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 16:51:35 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	if (*begin_list1)
	{
		list = *begin_list1;
		while (list->next)
			list = list->next;
		list->next = begin_list2;
	}
	else
		*begin_list1 = begin_list2;
}
