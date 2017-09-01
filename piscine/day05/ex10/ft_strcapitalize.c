/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 12:18:22 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:36:49 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	char *cursor;

	cursor = str;
	while (*str)
	{
		if (!ft_alphanumeric(*(str - 1)) && (*str >= 'a' && *str <= 'z'))
			*str -= 32;
		if (ft_alphanumeric(*(str - 1)) && (*str >= 'A' && *str <= 'Z'))
			*str += 32;
		++str;
	}
	return (cursor);
}

int		ft_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}