/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:24:23 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 20:23:39 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *cpy;

	i = -1;
	cpy = (int*)malloc(length * sizeof(int));
	while (++i < length)
		cpy[i] = f(tab[i]);
	return (cpy);
}
