/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:58:16 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 16:26:31 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr;
	t_list	*last;
	void	*tmp;

	if (*begin_list)
	{
		last = *begin_list;
		ptr = last->next;
		while (last->next)
		{
			if ((*cmp)(last->data, ptr->data) > 0)
			{
				tmp = last->data;
				last->data = ptr->data;
				ptr->data = tmp;
				last = *begin_list;
				ptr = last->next;
			}
			else
			{
				last = ptr;
				ptr = last->next;
			}
		}
	}
}

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

void	ft_sorted_list_merge(t_list **begin_list1,
	t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
