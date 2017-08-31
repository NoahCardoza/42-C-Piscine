/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:57:33 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 19:09:40 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void error()
{
	write(1, "Error\n", 6);
	exit(1);
}

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

int		solve(int x, int y, int **board, int ***cboard, int *count)
{
	int n;

	n = 0;
	if (y >= SIZE)
	{
		if (!*count)
			*cboard  = board_copy(board);
		else
			error();
		(*count)++;
		return (0);
	}
	if (board[x][y])
		return (solve((x + 1) % SIZE, y + !((x + 1) % SIZE), board, cboard, count));
	while (n < SIZE)
	{
		if (is_valid(n + 1, x, y, board))
		{
			board[x][y] = n + 1;
			solve((x + 1) % SIZE, y + !((x + 1) % SIZE), board, cboard, count);
			board[x][y] = 0;
		}
		n++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int **board;
	int **cboard;
	int count;

	if (argc != 10)
		error();
	board = board_new(++argv);
	if (!is_board_valid(board))
	{
		printf("Hello\n");
		error();
	}
	solve(0, 0, board, &cboard, &count);
	if (count == 1)
		board_print(cboard);
	else
		error();
	return (0);
}
