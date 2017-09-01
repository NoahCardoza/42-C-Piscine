/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 10:32:27 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 20:49:36 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *match;
	char *substr;

	match = str;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			match = str;
			substr = to_find;
			while (1)
			{
				if (*match++ != *substr++)
					break ;
				if (!*substr)
					return (str);
			}
		}
		str++;
	}
	return (((char *)0));
}
