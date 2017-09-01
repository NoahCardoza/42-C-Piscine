/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:35:51 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 22:52:13 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	board_print(int **board)
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putchar(board[i][j++] + '0');
			if ((j % SIZE))
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

int		**board_new(char **preset, int *error)
{
	int **board;
	int i;
	int j;

	i = 0;
	j = 0;
	board = (int**)malloc(SIZE * sizeof(int**));
	while (i < SIZE)
	{
		j = -1;
		board[i] = (int*)malloc(SIZE * sizeof(int*));
		while (++j < SIZE)
			if (preset[i][j] == '.' || ft_char_is_numeric(preset[i][j]))
				board[i][j] = (preset[i][j] == '.' ? 0 : preset[i][j] - '0');
			else
			{
				*error = 1;
				return (int**)(0);
			}
		i++;
	}
	return (board);
}

int		**board_copy(int **preset)
{
	int **board;
	int i;
	int j;

	i = 0;
	j = 0;
	board = (int**)malloc(SIZE * sizeof(int**));
	while (i < SIZE)
	{
		j = -1;
		board[i] = (int*)malloc(SIZE * sizeof(int*));
		while (++j < SIZE)
		{
			board[i][j] = preset[i][j];
		}
		i++;
	}
	return (board);
}
