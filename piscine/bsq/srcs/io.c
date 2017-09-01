/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 21:30:34 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/30 23:35:21 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		ft_get_line(int fd, char **line)
{
	char	c;
	int		len;
	char	*buf;
	int		buf_size;

	len = 0;
	buf_size = 8;
	buf = malloc(buf_size * sizeof(char));
	while (read(fd, &c, 1) > 0 && c != '\n')
	{
		buf[len++] = c;
		if (len >= buf_size)
			buf = ft_realloc(buf, (buf_size *= 2));
	}
	buf[len] = '\0';
	*line = buf;
	return (len);
}

int		ft_get_line_n(int fd, char **line, int buf_size)
{
	char	*buf;
	char	c;
	int		ret;
	int		chunk;
	int		total;

	chunk = buf_size;
	total = 0;
	if (!fd)
		chunk = 4096;
	buf = malloc((buf_size + 1) * sizeof(char));
	while ((ret = read(fd, (buf + total), buf_size - total)) > 0 &&
(total += ret) != buf_size)
		;
	if (ret && read(fd, &c, 1) && c == '\n')
	{
		buf[buf_size + 1] = '\0';
		*line = buf;
		return (buf_size);
	}
	return (0);
}
