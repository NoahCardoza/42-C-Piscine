/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:07:52 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/12 22:21:10 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return (0);
	if (!nb)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(12));
}
