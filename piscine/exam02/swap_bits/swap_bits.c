/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:09:18 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/25 16:12:43 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_swap_bits(unsigned char c)
{
	return ((c & 0xF0) >> c | (c & 0x0F) << c);
}

int		main(void)
{
	ft_putchar(ft_swap_bits('d'));
}