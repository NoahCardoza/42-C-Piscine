/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 20:51:25 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/17 13:49:15 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	char *addr;

	addr = str;
	while (*str)
	{
		str++;
	}
	return ((int)(&*str - &*addr));
}

char	*ft_strcpy(char *dest, char *src)
{
	char *cpy;

	cpy = dest;
	while (*src)
		*dest++ = *src++;
	while (*dest)
		*dest++ = '\0';
	return (cpy);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	if ((char*)(0) == (dest = (char*)malloc(len * sizeof(char*))))
	{
		return ((char*)(0));
	}
	return (ft_strcpy(dest, src));
}
