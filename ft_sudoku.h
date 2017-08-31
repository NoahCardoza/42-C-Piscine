/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 19:02:58 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 18:46:11 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

#define SIZE 9
#define CELL 3

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	board_print(int **board);
int		**board_new(char **preset);
int		**board_copy(int **preset);

#endif
