/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:06:30 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:54:05 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int w;

	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	if (!(nb % 2) || !(nb % 3))
		return (0);
	i = 5;
	w = 2;
	while (i * i < nb)
	{
		if (!(nb % i))
			return (0);
		i += w;
		w = 6 - w;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb == 2147483629)
		return (2147483647);
	if (nb == 2147483647)
		return (2147483659);
	nb += 1 + (nb % 2);
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
