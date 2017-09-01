/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:52:25 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:28:07 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_active_bits(int value)
{
	unsigned int	count;
	unsigned int	n;

	n = (unsigned int)value;
	count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
