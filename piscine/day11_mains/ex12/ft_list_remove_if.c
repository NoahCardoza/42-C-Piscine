/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 04:17:46 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 05:47:35 by nocardoz         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s1 - *s2);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;
	t_list *last;

	ptr = *begin_list;
	while (ptr)
		if (!cmp(ptr->data, data_ref))
			if (last)
			{
				last->next = ptr->next;
				free(ptr);
				ptr = last->next;
			}
			else if (!ptr->next && !(*begin_list = NULL))
				return ;
			else
			{
				*begin_list = ptr->next;
				free(ptr);
				last = *begin_list;
				ptr = last->next;
			}
		else if ((last = ptr))
			ptr = ptr->next;
	(!cmp(last->data, data_ref) && (*begin_list = NULL));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int		main(int argc, char *argv[])
{
	t_list *list;

	list = ft_list_push_params(argc, ++argv);
	ft_list_print(list);
	// printf("//////////\n");
	ft_list_remove_if(&list, "24", &ft_strcmp);
	printf("//////////\n");
	ft_list_print(list);
}
