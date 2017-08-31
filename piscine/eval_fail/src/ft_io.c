/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:34:41 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 22:59:15 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long n;

	n = (long)nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr((int)(n / 10));
	ft_putchar('0' + (n % 10));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
