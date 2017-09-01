/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 21:51:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/17 19:24:45 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *range;
	int *ptr;

	if (min >= max)
		return ((int*)(0));
	range = (int*)malloc((max - min) * sizeof(int*));
	ptr = range;
	while (min < max)
		*range++ = min++;
	return (ptr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if ((max - min) > 0)
		return (max - min);
	return (0);
}
