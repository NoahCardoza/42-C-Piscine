/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 06:04:49 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 16:16:26 by nocardoz         ###   ########.fr       */
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
