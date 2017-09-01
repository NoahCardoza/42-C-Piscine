/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 15:21:56 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/30 23:22:43 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		*create_dp(t_map *map)
{
	int i;
	int *dp;

	i = 0;
	dp = malloc(sizeof(int*) * (map->cols + 1));
	while (i < map->cols)
	{
		dp[i] = 0;
		i++;
	}
	return (dp);
}

void	find_max_square(t_map *map, int i, int j, char c)
{
	int	*dp;
	int prev;
	int temp;

	prev = 0;
	map->maxqlen = 0;
	dp = create_dp(map);
	if (map->data[i][j] == c)
		map->maxqlen = 1;
	while (++i <= map->rows && !(j = 0))
		while (++j <= map->cols)
		{
			temp = dp[j];
			if (map->data[i - 1][j - 1] == c || (dp[j] = 0))
				if (map->maxqlen < (dp[j] =
					MIN(MIN(dp[j - 1], prev), dp[j]) + 1))
				{
					map->maxqlen = dp[j];
					map->maxrow = i - dp[j];
					map->maxcol = j - dp[j];
				}
			prev = temp;
		}
}
