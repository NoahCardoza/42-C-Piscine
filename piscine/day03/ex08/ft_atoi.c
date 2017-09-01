/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:02:32 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/11 23:38:32 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int out;
	int neg;
	int i;
	int flag;

	out = 0;
	neg = 1;
	i = -1;
	flag = 0;
	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[++i])
		if ((str[i] >= '0' && str[i] <= '9'))
			flag++;
	if (!flag)
		return (0);
	i = (neg == -1 ? 0 : -1);
	while (str[++i] != '\0')
	{
		out = (out * 10) + str[i] - '0';
	}
	return (out * neg);
}
