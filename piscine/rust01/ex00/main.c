/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:57:33 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 22:53:50 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		solve(int pos, int **b, int ***cb, int *count)
{
	int n;
	int x;
	int y;

	x = pos % SIZE;
	y = pos / SIZE;
	n = 0;
	if (y >= SIZE)
	{
		if (!(*count)++)
			*cb = board_copy(b);
		return (*count);
	}
	if (b[x][y])
		return (solve(pos + 1, b, cb, count));
	while (++n <= SIZE)
		if (is_valid(n, x, y, b))
		{
			b[x][y] = n;
			if (solve(pos + 1, b, cb, count) >= 2)
				return (2);
			b[x][y] = 0;
		}
	return (*count);
}

int		main(int argc, char *argv[])
{
	int **board;
	int **cboard;
	int count;
	int error;

	error = 0;
	count = 0;
	if (argc == 10)
	{
		board = board_new(++argv, &error);
		if (!error && is_board_valid(board))
		{
			if (solve(0, board, &cboard, &count) == 1)
			{
				board_print(cboard);
				return (0);
			}
		}
	}
	ft_error();
	return (0);
}
