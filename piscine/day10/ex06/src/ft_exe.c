/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/22 22:18:40 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void	ft_exe(int x, char o, int y)
{
	if (o == '+')
		ft_putnbr(x + y);
	else if (o == '-')
		ft_putnbr(x - y);
	else if (o == '*')
		ft_putnbr(x * y);
	else if (o == '/')
		if (!y)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(x / y);
	else if (o == '%')
		if (!y)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(x % y);
	else
		ft_putnbr(0);
	ft_putchar('\n');
}
