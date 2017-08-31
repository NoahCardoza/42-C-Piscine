/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:58:00 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 02:30:27 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *elm;

	elm = (t_list*)malloc(sizeof(t_list));
	elm->data = data;
	elm->next = NULL;
	return (elm);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	while (list->next)
		list = list->next;
	list->next = ft_create_elem(data);
}

int ft_list_size(t_list *begin_list)
{
	int count;

	count = 1;
	if (!begin_list)
		return (0);
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

int		main(void)
{
	t_list *elm;

	elm = ft_create_elem((int*)(6));
	ft_list_push_back(&elm, (int*)(42));
	ft_list_push_back(&elm, (int*)(24));
	ft_list_push_back(&elm, (int*)(45));
	ft_list_push_back(&elm, (int*)(48));
	ft_list_push_back(&elm, (int*)(67));
	ft_list_push_back(&elm, (int*)(97));

	printf("%d\n", ft_list_size(elm));
}
