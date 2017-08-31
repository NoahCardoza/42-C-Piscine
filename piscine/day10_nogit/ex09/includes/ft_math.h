/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:29 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 14:37:42 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

#include <unistd.h>


void	ft_exe(int x, char o, int y);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_is_whitespace(char c);
int		ft_char_is_numeric(char c);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);

#endif
