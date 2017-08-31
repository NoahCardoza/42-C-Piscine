/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 16:08:21 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int main(int argc, char *argv[])
{
	int x;
	int y;
	
	if (argc != 4)
		ft_putchar('\n');
	else
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[3]);
		if (!*(argv[2] + 1))
			ft_exe(x, *argv[2], y);
		else
			ft_putstr("0\n");
	}
	return (0);
}
