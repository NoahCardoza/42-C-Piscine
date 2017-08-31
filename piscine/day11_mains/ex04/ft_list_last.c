/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:03:27 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 02:31:30 by nocardoz         ###   ########.fr       */
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

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (begin_list);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

int		main(void)
{
	t_list *list;

	list = ft_create_elem((int*)(6));
	ft_list_push_back(&list, (int*)(42));
	ft_list_push_back(&list, (int*)(24));
	ft_list_push_back(&list, (int*)(45));
	ft_list_push_back(&list, (int*)(48));
	ft_list_push_back(&list, (int*)(67));
	ft_list_push_back(&list, (int*)(97));

	printf("%d\n", (int)(ft_list_last(list)->data));
}