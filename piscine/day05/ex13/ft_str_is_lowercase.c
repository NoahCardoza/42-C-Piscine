/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 22:16:06 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 21:58:20 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}
