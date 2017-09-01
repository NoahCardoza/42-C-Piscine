/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 03:39:32 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 23:38:35 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	long n;

	n = (long)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr((int)(n / 10));
	ft_putchar('0' + (int)(nb % 10));
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (*par->str)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size_param);
		ft_putstr("\n");
		ft_print_words_tables(par->tab);
		par++;
	}
}
