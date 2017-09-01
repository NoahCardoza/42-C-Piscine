/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 01:51:31 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/17 23:34:54 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	char *old;

	old = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*dest)
		*dest++ = '\0';
	return (old);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	**addr;
	char	*str;

	argc++;
	addr = ++argv;
	len = 0;
	while (*addr)
		len += ft_strlen(*addr++) + 1;
	str = (char*)malloc(len * sizeof(char*));
	while (*argv)
	{
		ft_strcat(str, *argv++);
		if (*argv)
			ft_strcat(str, "\n");
	}
	return (str);
}
