/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 13:48:24 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 23:36:06 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H
# include <stdio.h>
# include <stdlib.h>

# define OPP_TIER_3(c) (c == '*' || c == '/')
# define OPP_MOD(c) (c == '%')

int		eval_expr(char *str);

void	ft_putnbr(int nbr);
void	ft_putchar(char c);
int		ft_trim(char **str);

int		ft_exe(int x, char o, int y);
int		next_summands(char **expr, char prev_opp);
char	next_opp_i(char *expr);
char	next_opp(char **expr);

void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_is_whitespace(char c);
int		ft_is_numeric(char c);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char **str);

int		eval_expr2(char **expr);

#endif
