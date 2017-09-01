/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:14:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:22:28 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int out;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	out = nb;
	while (--power)
		out *= nb;
	return (out);
}
