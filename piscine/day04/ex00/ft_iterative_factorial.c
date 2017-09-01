/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:02:27 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:20:18 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	if (nb > 12)
		return (0);
	total = 1;
	while (nb)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
