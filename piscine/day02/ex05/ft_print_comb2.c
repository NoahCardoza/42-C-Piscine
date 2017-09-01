/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:06:33 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/10 13:28:42 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		realint(int x, int y)
{
	return (10 * (x - '0')) + (y - '0');
}

void	pretty_print(int i00, int i01, int i10, int i11)
{
	if (realint(i00, i01) < realint(i10, i11))
	{
		ft_putchar(i00);
		ft_putchar(i01);
		ft_putchar(' ');
		ft_putchar(i10);
		ft_putchar(i11);
		if ((i00 + i01 + i10 + i11) != 227)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_is_comb2(void)
{
	int i00;
	int i01;
	int i10;
	int i11;

	i00 = '0' - 1;
	while (++i00 < 58)
	{
		i01 = '0' - 1;
		while (++i01 < 58)
		{
			i10 = '0' - 1;
			while (++i10 < 58)
			{
				i11 = '0' - 1;
				while (++i11 < 58)
				{
					pretty_print(i00, i01, i10, i11);
				}
			}
		}
	}
}
