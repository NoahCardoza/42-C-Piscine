/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwhite <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 06:17:02 by thwhite           #+#    #+#             */
/*   Updated: 2017/08/13 11:00:05 by thwhite          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}


void	 body(int extra_x, int x)
{
	if (extra_x == 1 || extra_x == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	 topandbottom(int extra_x, int x)
{
	if (extra_x == 1 || extra_x == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	 rush(int x, int y)
{
	int extra_x;
	int extra_y;

	extra_y = 1;
	while (extra_y <= y)
	{
		extra_x = 1;
		while (extra_x <= x)
		{
			if (extra_y == 1 || extra_y == y)
				topandbottom(extra_x, x);
			else
				body(extra_x, x);
			extra_x++;
		}
		ft_putchar('\n');
		extra_y++;
	}
}

void	 rush(int x, int y);

int 	main(void)
{
	rush(5 , 3);
	return(0);
}
