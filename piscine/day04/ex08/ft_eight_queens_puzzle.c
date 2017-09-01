/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:24:24 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:55:08 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 8

int		safe(int row, int col, int *board)
{
	int r;

	r = -1;
	while (++r < row)
	{
		if (board[r] == col)
			return (0);
		else if (board[r] + r == col + row || board[r] - r == col - row)
			return (0);
	}
	return (1);
}

void	solve(int row, int *board, int *count)
{
	int col;

	if (row >= N)
		return ;
	col = 0;
	while (col < N)
	{
		if (safe(row, col, board))
		{
			board[row] = col;
			if (row == N - 1)
			{
				(*count)++;
				board[row] = -1;
				return ;
			}
			solve(row + 1, board, count);
			board[row] = -1;
		}
		col++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int count;
	int board[N];

	count = -1;
	while (++count < N)
		board[count] = -1;
	count = 0;
	solve(0, board, &count);
	return (count);
}
