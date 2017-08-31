/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 00:53:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 02:52:24 by nocardoz         ###   ########.fr       */
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elm;

	elm = ft_create_elem(data);
	elm->next = *begin_list;
	*begin_list = elm;
}

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *list;

	ac++;
	list = ft_create_elem(*av++);
	while (*av)
		ft_list_push_front(&list, *av++);
	return (list);
}

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *tmp;

	if (begin_list)
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

void ft_list_print(t_list *list)
{
	while (list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

int		main(int argc, char *argv[])
{
	t_list *list;

	list = ft_list_push_params(argc, argv);
	ft_list_print(list);
	ft_list_clear(&list);
	ft_list_print(list);
}
