/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 19:32:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/13 12:05:31 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	p_row(int w)
{
	int	i;

	i = -1;
	ft_putchar('o');
	while (++i < w - 2)
		ft_putchar('-');
	if (w - 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	p_body(int w, int h)
{
	int	i;
	int j;

	j = -1;
	while (++j < h - 2)
	{
		i = -1;
		ft_putchar('|');
		while (++i < w - 2)
			ft_putchar(' ');
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 && y <= 0)
		return ;
	p_row(x);
	p_body(x, y);
	if (y - 1)
		p_row(x);
}
