/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 13:29:07 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:06:09 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int	max;

	max = 0;
	length--;
	while (length)
		if (tab[length--] > max)
			max = tab[length + 1];
	return (max);
}
