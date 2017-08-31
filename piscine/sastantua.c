/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:31:58 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/13 17:03:07 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_calc(int size, int *height, int *width)
{
	int bump;
	int bump1;
	int base;
	int i;

	i = -1;
	bump = 12;
	bump1 = 2;
	base = 5;
	while (++i < size)
	{
		base += bump;
		bump += bump1;
		bump1 = 6 - bump1;
	}
	*height = base;
	bump = 0;
	base = 0;
	bump = 4;
	base = 3;
	i = -1;
	while (++i < size)
		base += bump++;
	*width = base;
}

void	padd_left(int width, int base)
{
	int padding;

	padding = (base / 2) - width / 2;
	while (padding-- > 0)
		ft_putchar(' ');
}

// void	print_row()
// {
// 	int i;

// 	i = 0;
// 	ft_putchar('/');	
// 	i = -1;
// 	while (++i < width)
// 		if (height % 2)
// 		ft_putchar('*');
// }

void	ft_build(int base, int height, int size)
{
	int width;
	int bump;
	int i;
	int layer;
	int count;
	int row;
	int door_size;

	row = 0;
	door_size = size - size / 2;

	width = 1;
	bump = 4;
	layer = 0;
	count = 3;
	while (width <= base)
	{
		row++;
		padd_left(width, base);
		ft_putchar('/');	
		i = -1;
		while (++i < width)
			if (row > height - size + !(size % 2) && i > (width / 2) - door_size)
				if (i < (width / 2) + door_size)
					if (door_size > 2 && height - row == (door_size - door_size % 2) && ((width / 2) + door_size - 2) == i)
						ft_putchar('$');
					else
						ft_putchar('|');
				else
					ft_putchar('*');
			else 
				ft_putchar('*');
		width += 2;
		ft_putchar('\\');
		ft_putchar('\n');
		layer++;
		if (!(layer % count))
		{
			width += bump;
			if (!(layer % 2))
				bump += 2;
			layer = 0;
			count++;
		}
	}
}

void	sastantua(int size)
{
	int base;
	int width;

	if (size < 1)
		return ;
	ft_calc(size, &base, &width);
	ft_build(base, width, size);
}

int		main(void)
{
	sastantua(5);

}