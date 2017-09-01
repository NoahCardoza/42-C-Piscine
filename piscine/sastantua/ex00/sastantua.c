/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 09:31:58 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/13 21:32:48 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_calc(int size, int *height, int *width)
{
	int bump;
	int bump1;
	int base;
	int i;

	i = 0;
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
	i = 0;
	while (++i < size)
		base += bump++;
	*width = base;
}

int		padd_left(int width, int base)
{
	int padding;

	padding = (base / 2) - width / 2;
	while (padding-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	return (-1);
}

void	print_row(int *args[3], int h, int ds, int r)
{
	int lw;
	int b;
	int s;
	int i;

	lw = *args[0];
	b = *args[1];
	s = *args[2];
	i = padd_left(lw, b);
	while (++i < lw)
		if (r > h - s + !(s % 2) && i > (lw / 2) - ds
			&& i < (lw / 2) + ds)
			if (ds > 2 && h - r == (ds - ((ds % 2)
				|| (ds % 3) || (ds % 5)))
				&& ((lw / 2) + ds - 2) == i)
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('*');
	*args[0] += 2;
	ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_build(int w, int h, int *args[3], int lw)
{
	int bump;
	int layer;
	int count;
	int r;
	int ds;

	r = 0;
	ds = *args[2] - *args[2] / 2;
	bump = 4;
	layer = 0;
	count = 3;
	args[0] = &lw;
	args[1] = &w;
	while (lw <= w && ++r)
	{
		print_row(args, h, ds, r);
		if (!(++layer % count) && count++)
		{
			lw += bump;
			if (!(layer % 2))
				bump += 2;
			layer = 0;
		}
	}
}

void	sastantua(int size)
{
	int width;
	int height;
	int *args[3];

	if (size < 1)
		return ;
	args[2] = &size;
	ft_calc(size, &width, &height);
	ft_build(width, height, args, 1);
}
