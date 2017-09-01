/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:53:22 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 22:54:25 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		is_valid(int v, int x, int y, int **board)
{
	int block_y;
	int block_x;
	int i;
	int j;

	block_x = (x / 3) * 3;
	block_y = (y / 3) * 3;
	i = -1;
	while (++i < CELL)
	{
		j = -1;
		while (++j < CELL)
			if (board[block_x + i][block_y + j] == v)
				return (0);
	}
	i = 0;
	while (i < SIZE)
		if (board[i++][y] == v)
			return (0);
	j = 0;
	while (j < SIZE)
		if (board[x][j++] == v)
			return (0);
	return (1);
}

int		is_board_valid(int **board)
{
	int x;
	int y;
	int v;

	x = 0;
	y = 0;
	while (x < SIZE)
	{
		y = 0;
		while (y < SIZE && board[x][y])
		{
			v = board[x][y];
			board[x][y] = 0;
			if (!is_valid(v, x, y, board))
				return (0);
			board[x][y] = v;
			y++;
		}
		x++;
	}
	return (1);
}
