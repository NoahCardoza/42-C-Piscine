/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:15:11 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/27 23:09:22 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int	ft_exe(int x, char o, int y)
{
	if (o == '+')
		return (x + y);
	else if (o == '-')
		return (x - y);
	else if (o == '*')
		return (x * y);
	else if (o == '/')
		return (x / y);
	else if (o == '%')
		return (x % y);
	return (0);
}
