/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 09:28:41 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 16:59:59 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(char c);
int	ft_is_whitespace(char c);

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
	while (*str && ft_isnumber(*str))
	{
		out = (out * 10) + *str++ - '0';
	}
	return (out * neg);
}

int	ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_whitespace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}
