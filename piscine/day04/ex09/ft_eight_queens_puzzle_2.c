/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:41:28 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 23:00:16 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 8

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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

void	put_arr(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		ft_putchar('1' + arr[i++]);
	ft_putchar('\n');
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
				put_arr(board, N);
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

void	ft_eight_queens_puzzle_2(void)
{
	int count;
	int board[N];

	count = -1;
	while (++count < N)
		board[count] = -1;
	count = 0;
	solve(0, board, &count);
}
