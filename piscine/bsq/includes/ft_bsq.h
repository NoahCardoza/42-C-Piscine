/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 15:07:35 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/30 23:18:25 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <unistd.h>
# include <fcntl.h>

# define MIN(a, b) (((a) < (b)) ? a: b)
# define MAX(a, b) (((b) > (b)) ? a: b)

typedef struct	s_map
{
	char	**data;
	int		rows;
	int		cols;
	int		maxqlen;
	int		maxrow;
	int		maxcol;
	int		i;
	int		j;
	char	*key;
	char	*head;
	int		prev;
	int		*dp;
}				t_map;

int				ft_count(char c, char *str);
int				ft_has_dup(char *str);
int				ft_atoi(char **expr);
int				ft_strlen(char *str);

int				ft_get_line(int fd, char **line);
int				ft_get_line_n(int fd, char **line, int buf_size);

int				index_n_of(int n, char c, char *str);

void			*ft_memcpy(void *dst, const void *src, unsigned int size);
char			*ft_realloc(char *ptr, unsigned int size);

void			map_print(t_map *map);
t_map			*map_init(int fd);
void			map_solve(int fd, int tbf);
void			find_max_square(t_map *map, int i, int j, char c);

#endif
