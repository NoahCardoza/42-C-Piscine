/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_gobble.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:21:29 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/30 20:02:48 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int	ft_is_whitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_trim(char **str)
{
	while (**str && ft_is_whitespace(**str))
		(*str)++;
	return (!!**str);
}

int	ft_str_is_numeric(char *str)
{
	if (*str == '-')
		str++;
	while (*str != '\0')
	{
		if (!ft_is_numeric(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_atoi(char **expr)
{
	int out;
	int neg;
	int i;

	out = 0;
	neg = 1;
	i = -1;
	while (*(*expr + 3) && ft_is_numeric(**expr))
	{
		out = (out * 10) + *((*expr)++) - '0';
	}
	return (out * neg);
}
