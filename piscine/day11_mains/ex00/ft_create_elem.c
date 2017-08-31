/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 00:57:13 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/23 02:21:30 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_create_elem(void *data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node){
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

int main(void)
{
	t_list *elm;
	int n = 42;

	elm = ft_create_elem((int*)(n));
	printf("%d\n", (int)elm->data);
}
