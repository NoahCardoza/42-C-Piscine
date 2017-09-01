/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 03:39:32 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 23:05:57 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int		ft_count_words(char *str)
{
	int	count;

	count = 0;
	if (!*str)
		return (count);
	while (*str)
		if (ft_is_whitespace(*str++))
			if (!*str || !ft_is_whitespace(*str))
				count += 1;
	count += !ft_is_whitespace(*(str - 1));
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*cursor;
	unsigned int	i;

	cursor = dest;
	i = 0;
	while (*src && (i < n))
	{
		*dest++ = *src++;
		i++;
	}
	while (*dest)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (cursor);
}

void	ft_trim(char *str, char **start, char **end)
{
	while (ft_is_whitespace(*str))
		str++;
	*start = str;
	while (*str && !ft_is_whitespace(*str))
		str++;
	*end = str;
}

char	**ft_split_whitespaces(char *str)
{
	char	*ptr;
	char	**arr;
	char	**arr_ptr;
	int		len;

	len = ft_count_words(str);
	arr = (char**)malloc((len + 1) * sizeof(char**));
	arr_ptr = arr;
	ptr = str;
	while (*str)
	{
		ft_trim(str, &str, &ptr);
		if (*str)
		{
			*arr = (char*)malloc(sizeof(char) * (int)(ptr - str));
			ft_strncpy(*arr, str, (int)(ptr - str));
			str = ptr;
			arr++;
		}
	}
	*arr = (char*)(0);
	return (arr_ptr);
}
