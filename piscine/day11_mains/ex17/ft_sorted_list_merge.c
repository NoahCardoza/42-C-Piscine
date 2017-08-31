/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 08:58:16 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 09:50:15 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>


int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s1 - *s2);
}


t_list	*ft_create_elem(void *data)
{
	t_list *elm;

	elm = malloc(sizeof(t_list));
	elm->data = data;
	elm->next = NULL;
	return (elm);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (begin_list)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *list;

	ac++;
	list = ft_create_elem(*av++);
	while (*av)
		ft_list_push_back(&list, *av++);
	return (list);
}

void ft_list_print(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}


///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *ptr;
	t_list *last;
	void *tmp;

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

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
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


void ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}

int		main(int argc, char *argv[])
{
	t_list *list1;
	t_list *list2;

	list1 = ft_list_push_params(argc, ++argv);
	list2 = ft_create_elem("HELLO");
	ft_list_push_back(&list2, "hello");
	ft_list_push_back(&list2, "BYE");
	ft_list_push_back(&list2, "bye");
	ft_sorted_list_merge(&list1, list2, &ft_strcmp);
	ft_list_print(list1);
}
