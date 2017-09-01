/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 21:59:31 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/30 23:40:17 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	map_free(t_map *m)
{
	m->i = 0;
	free(m->head);
	free(m->dp);
	while (m->i < m->rows)
		free(m->data[m->i++]);
	free(m->data);
	free(m);
}

void	map_solve(int fd, int tbf)
{
	t_map	*map;
	int		error;

	error = 0;
	if (fd != -1 && (map = map_init(fd)))
	{
		find_max_square(map, 0, 0, *map->key);
		map_print(map);
		if (tbf)
			map_free(map);
	}
	else
	{
		write(2, "map error\n", 10);
	}
	if (tbf)
	{
		close(fd);
	}
}

t_map	*map_new(void)
{
	t_map	*m;

	m = malloc(sizeof(t_map));
	m->prev = 0;
	m->dp = NULL;
	m->rows = 0;
	m->cols = 0;
	m->maxqlen = 0;
	m->maxrow = 0;
	m->maxcol = 0;
	m->i = 0;
	m->j = 0;
	m->key = NULL;
	m->head = NULL;
	m->data = NULL;
	return (m);
}

void	map_print(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		if ((map->maxrow <= i && i < map->maxrow + map->maxqlen))
		{
			j = 0;
			write(1, map->data[i], map->maxcol);
			while (j < map->maxqlen)
			{
				write(1, map->key + 2, 1);
				j++;
			}
			write(1, map->data[i] + map->maxcol + map->maxqlen,
				map->cols - map->maxcol - map->maxqlen);
		}
		else
			write(1, map->data[i], map->cols);
		write(1, "\n", 1);
		i++;
	}
}

t_map	*map_init(int fd)
{
	t_map	*m;

	m = map_new();
	ft_get_line(fd, &m->head);
	m->key = m->head;
	if (!(m->rows = ft_atoi(&m->key)) || ft_strlen(m->key) != 3 ||
		ft_has_dup(m->key))
		return (NULL);
	m->data = malloc(m->rows * sizeof(char*));
	if (!(m->cols = ft_get_line(fd, &m->data[m->i])))
		return (NULL);
	while (m->i < m->rows && (m->j = -1))
	{
		while (++m->j < m->cols)
			if (index_n_of(2, m->data[m->i][m->j], m->key) == -1)
				return (NULL);
		if (++m->i != m->rows && ft_get_line_n(fd, &m->data[m->i],
			m->cols) != m->cols)
			return (NULL);
	}
	if (read(fd, NULL, 1))
		return (NULL);
	return (m);
}
