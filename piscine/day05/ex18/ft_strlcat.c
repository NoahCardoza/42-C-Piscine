/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:25:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:40:51 by nocardoz         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;
	int				dlen;

	d = dest;
	s = src;
	n = size;
	while (*d)
	{
		d++;
		n--;
	}
	dlen = (int)(d - dest);
	n = size - dlen;
	if (n == 0)
		return (ft_strlen(src) + dlen);
	while (*s && n-- != 1)
		*d++ = *s++;
	*d = '\0';
	return ((int)(dlen + (s - src)));
}
