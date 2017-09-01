/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:09:51 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/10 14:39:33 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	i_out(int i0, int i1, int i2)
{
	ft_putchar('0' + i0);
	ft_putchar('0' + i1);
	ft_putchar('0' + i2);
	if (!(504 == i0 * i1 * i2))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_is_comb(void)
{
	int i0;
	int i1;
	int i2;

	i0 = -1;
	while (++i0 <= 9)
	{
		i1 = -1;
		while (++i1 <= 9)
		{
			i2 = -1;
			while (++i2 <= 9)
				if ((i1 < i2 && i0 < i1))
					i_out(i0, i1, i2);
		}
	}
}
