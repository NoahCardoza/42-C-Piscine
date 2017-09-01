/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/22 22:32:04 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	b++;
	a = 0;
	ft_putstr("error : only [ ");
	while (a < 6 && *g_opptab[a].opp)
	{
		ft_putstr(g_opptab[a++].opp);
		ft_putstr(" ");
	}
	ft_putstr("] are accepted.");
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s1 - *s2);
}

t_f		ft_select(char *c, t_opp *g_opptab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (!ft_strcmp(g_opptab[i].opp, c))
			return (g_opptab[i].func);
		i++;
	}
	return (ft_select("", g_opptab, size));
}

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	else
	{
		ft_select(argv[2], g_opptab, 6)(ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putstr("\n");
	}
	return (0);
}
