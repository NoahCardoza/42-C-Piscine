/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:08:12 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 16:20:05 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elm;

	elm = ft_create_elem(data);
	elm->next = *begin_list;
	*begin_list = elm;
}

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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front(begin_list, data);
	ft_list_sort(begin_list, cmp);
}
