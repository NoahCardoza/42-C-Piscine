/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 04:17:46 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 17:00:57 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;
	t_list *last;

	ptr = *begin_list;
	while (ptr)
	{
		if (!cmp(ptr->data, data_ref))
		{
			if (ptr == *begin_list)
			{
				*begin_list = ptr->next;
				free(ptr);
				ptr = *begin_list;
			}
			else
			{
				last->next = ptr->next;
				free(ptr);
				ptr = last->next;
			}
			continue ;
		}
		last = ptr;
		ptr = ptr->next;
	}
}
