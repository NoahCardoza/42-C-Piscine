/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:35:02 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:24:08 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	return ((c != '\\' && (c >= 32 && c != 127)));
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_char_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
