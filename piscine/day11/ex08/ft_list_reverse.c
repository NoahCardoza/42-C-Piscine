/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 03:06:25 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 17:32:23 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (begin_list && i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

void	ft_list_reverse(t_list **begin_list)
{
	int		len;
	int		i;
	void	*tmp;

	len = ft_list_size(*begin_list);
	i = -1;
	while (++i < len--)
	{
		tmp = ft_list_at(*begin_list, i)->data;
		ft_list_at(*begin_list, i)->data = ft_list_at(*begin_list, len)->data;
		ft_list_at(*begin_list, len)->data = tmp;
	}
}
