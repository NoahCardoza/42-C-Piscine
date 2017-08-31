/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 13:08:37 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 14:00:15 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

void ft(int i)
{	
	printf("%d\n", i);
}

int main(void)
{
	int arr[] = {1,2,3,4,5};

	ft_foreach(arr, 5, *ft);
}