/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:11:57 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/29 16:01:09 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void		*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char*)src;
	d = (char*)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char		*ft_realloc(char *ptr, unsigned int size)
{
	char	*new;

	new = (char *)malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}
