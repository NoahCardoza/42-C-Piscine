/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 23:00:34 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:25:35 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int start;
	int end;
	int c_s;
	int c_e;

	start = (hour % 12);
	start = (start ? start : 12);
	end = ((hour + 1) % 12);
	end = (end ? end : 12);
	c_s = (hour >= 12 ? 'P' : 'A');
	c_e = ((hour + 1 >= 12 || hour >= 12) && hour != 23 ? 'P' : 'A');
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
	start, c_s, end, c_e);
}
