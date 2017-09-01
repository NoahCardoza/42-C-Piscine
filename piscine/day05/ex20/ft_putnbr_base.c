/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:10:24 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:03:30 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	char *addr;

	addr = str;
	while (*str)
	{
		str++;
	}
	return ((int)(&*str - &*addr));
}

int		ft_strcount(char *str, char c)
{
	int count;

	count = 0;
	while (*str)
		count += (*str++ == c);
	return (count);
}

int		base_is_valid(char *b)
{
	char *ptr;

	ptr = b;
	if ((!*b || *(b + 1) == 0) || ft_strcount(b, '+') || ft_strcount(b, '-'))
		return (0);
	while (*ptr)
		if (ft_strcount(b, *ptr++) > 1)
			return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long b;
	long n;

	n = (long)nbr;
	if (!base_is_valid(base))
		return ;
	b = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= b)
		ft_putnbr_base((int)(n / b), base);
	ft_putchar(base[(n % b)]);
}
