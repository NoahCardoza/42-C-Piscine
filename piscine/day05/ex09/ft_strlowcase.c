/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:28:38 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:31:20 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char *cpy;

	cpy = str;
	while (*cpy)
	{
		if (ft_is_uppercase(*cpy))
			*cpy += 32;
		cpy++;
	}
	return (str);
}
