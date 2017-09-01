/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 11:51:25 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:53:37 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int w;

	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	if (nb < 2 || !(nb % 2) || !(nb % 3))
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
