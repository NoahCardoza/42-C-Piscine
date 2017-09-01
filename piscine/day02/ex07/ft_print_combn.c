/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 13:33:01 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/10 21:27:09 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + (nb % 10));
}

int		ft_pow(int n, int p)
{
	int out;

	out = n;
	while (--p)
		out *= n;
	return (out);
}

int		check(int n, int total)
{
	if (n >= 10)
	{
		if (check(n / 10, total) < n % 10)
			return (n % 10);
		else
			return (total);
	}
	if (n == 0 && total == 10)
		return (1);
	else if (n == 0)
		return (total);
	return (n % 10);
}

void	ft_print_combn(int n)
{
	int i;
	int total;
	int com;

	total = ft_pow(10, n);
	i = (total / 100) - 1;
	com = 0;
	while (++i < total)
	{
		if (check(i, total) != total)
		{
			if (com++)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			if (i < total / 10 && total != 10)
				ft_putchar('0');
			ft_putnbr(i);
		}
	}
}
