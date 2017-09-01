/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 20:46:58 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 22:01:07 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	return (c >= 65 && c <= 90);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}
