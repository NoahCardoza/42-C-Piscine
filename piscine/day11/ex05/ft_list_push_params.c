/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:06:15 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 17:08:51 by nocardoz         ###   ########.fr       */
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;

	list = ((void*)(0));
	if (ac > 1)
	{
		list = ft_create_elem(*++av);
		av++;
		while (*av)
			ft_list_push_front(&list, *av++);
	}
	return (list);
}
