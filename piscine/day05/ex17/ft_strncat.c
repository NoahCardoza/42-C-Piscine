/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:25:48 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/15 23:42:32 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *old;

	old = dest;
	while (*dest)
		dest++;
	while (*src && nb)
	{
		*dest++ = *src++;
		nb--;
	}
	while (*dest)
		*dest = '\0';
	return (old);
}
