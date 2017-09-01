/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:46:25 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/20 18:24:52 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 && *s2 == '*')
		return ((match(s1 + 1, s2) || match(s1, s2 + 1)));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	return (0);
}