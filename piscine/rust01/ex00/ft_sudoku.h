/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdervish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:57:47 by hdervish          #+#    #+#             */
/*   Updated: 2017/08/20 22:57:52 by hdervish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

# define SIZE 9
# define CELL 3

void	board_print(int **board);
int		**board_new(char **preset, int *error);
int		**board_copy(int **preset);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(void);
int		ft_char_is_numeric(char c);
int		is_valid(int v, int x, int y, int **board);
int		is_board_valid(int **board);
int		solve(int pos, int **b, int ***cb, int *count);

#endif
