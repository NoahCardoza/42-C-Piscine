/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:29 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/22 00:16:02 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef void	(*t_f)(int, int);

typedef struct	s_opp_t
{
	char	*opp;
	t_f		func;
}				t_opp;

void			ft_exe(int x, char o, int y);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_is_whitespace(char c);
int				ft_char_is_numeric(char c);
int				ft_str_is_numeric(char *str);
int				ft_atoi(char *str);
void			ft_add(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_mul(int a, int b);
void			ft_sub(int a, int b);
void			ft_usage(int a, int b);

#endif
