/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 19:50:12 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/31 21:26:04 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		ft_putchar(c);
	else
		ft_putchar('.');
}

void	ft_puthex(unsigned char c)
{
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void print_bits(unsigned char *str, int len)
{
	int i;
	int bytes;

	i = 0;
	bytes = len;
	while (len % 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (!(len++ % 2))
			ft_putchar(' ');
	}
	while (i < bytes)
		ft_put_printable(str[i++]);
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *arr;
	size_t i;

	i = 0;
	arr = (unsigned char*)addr;

	while (i < size)
	{
		ft_puthex(arr[i++]);
		if (!(i % 2))
			ft_putchar(' ');
		if (!(i % 16) || i == size)
		{
			print_bits(arr + (i - 1) / 16 * 16, (16 - (i % 16)));
			ft_putchar('\n');
		}
	}
}
