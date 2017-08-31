/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utills.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:26:05 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 14:38:27 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_is_whitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_char_is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_str_is_numeric(char *str)
{
	if (*str == '-')
		str++;
	while (*str != '\0')
	{
		if (!ft_char_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int out;
	int neg;
	int i;

	out = 0;
	neg = 1;
	i = -1;
	while (*str && ft_is_whitespace(*str) && str++)
		;
	if (*str == '-' && str++)
		neg = -1;
	else if (*str == '+')
		str++;
	while (*str && ft_char_is_numeric(*str))
	{
		out = (out * 10) + *str++ - '0';
	}
	return (out * neg);
}