/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:12:10 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:10:52 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_arr_count(int *arr, int len, int n)
{
	int count;

	count = 0;
	while (len)
	{
		count += (*arr++ == n);
		len--;
	}
	return (count);
}

int		ft_unmatch(int *tab, int length)
{
	int *ptr;
	int i;

	ptr = tab;
	i = -1;
	while (++i < length)
	{
		if (ft_arr_count(tab, length, *ptr++) == 1)
			return (*(ptr - 1));
	}
	return (0);
}
