/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:08:37 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/30 23:41:28 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int		index_n_of(int n, char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] && n--)
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_count(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str++ == c)
			i++;
	}
	return (i);
}

int		ft_has_dup(char *str)
{
	while (*str)
	{
		if (ft_count(*str, str) > 1)
			return (1);
		str++;
	}
	return (0);
}

int		main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		while (*++argv)
		{
			map_solve(open(*argv, S_IREAD), !*(argv + 1));
			if (*(argv + 1))
				write(1 ,"\n", 1);
		}
	}
	else
		map_solve(0, 0);
	return (0);
}
