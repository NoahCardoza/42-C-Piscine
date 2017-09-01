/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:11:43 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 21:57:51 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
