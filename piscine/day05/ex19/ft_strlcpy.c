/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:25:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 22:24:09 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	char *addr;

	addr = str;
	while (*str)
	{
		str++;
	}
	return ((int)(&*str - &*addr));
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *s;

	s = src;
	while (*src && size--)
		*dest++ = *src++;
	if (*dest && size)
		while (*dest)
			*dest++ = '\0';
	return ((int)((src - s)));
}
