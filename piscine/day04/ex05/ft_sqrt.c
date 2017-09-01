/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 16:11:57 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:50:40 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen(int n)
{
	int len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_sqrt(int nb)
{
	int sq_check;

	sq_check = (nb / ft_intlen(nb) / 2) + 1;
	while (--sq_check > 0)
		if (sq_check * sq_check == nb)
			return (sq_check);
	return (0);
}
