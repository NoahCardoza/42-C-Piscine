/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:04:41 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 23:34:20 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	char	*addr;

	addr = str;
	while (*str)
	{
		str++;
	}
	return ((int)(&*str - &*addr));
}

char				*ft_strcpy(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*src)
		*dest++ = *src++;
	while (*dest)
		*dest++ = '\0';
	return (cpy);
}

char				*ft_strdup(char *src)
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

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par *out;
	struct s_stock_par *ptr;

	out = (struct s_stock_par*)malloc((ac + 1) * sizeof(struct s_stock_par));
	ptr = out;
	while (*av)
	{
		ptr->size_param = ft_strlen(*av);
		ptr->str = *av;
		ptr->copy = ft_strdup(*av);
		ptr->tab = ft_split_whitespaces(*av);
		ptr++;
		av++;
	}
	ptr->str = "\0";
	return (out);
}
