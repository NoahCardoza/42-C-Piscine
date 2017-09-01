/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:28:38 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 20:58:40 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	char *cpy;

	cpy = str;
	while (*cpy)
	{
		if (ft_is_lowercase(*cpy))
			*cpy -= 32;
		cpy++;
	}
	return (str);
}
