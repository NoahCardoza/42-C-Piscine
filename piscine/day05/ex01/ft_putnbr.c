/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:22:55 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 21:37:05 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int sub;

	sub = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb++;
		nb *= -1;
		sub = 1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + (nb % 10) + sub);
}
