/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:41:00 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/22 23:05:54 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
{
	char **ptr;
	char *swap;

	if (*++tab)
	{
		ptr = tab;
		while (*ptr)
		{
			if (ft_strcmp(*(ptr - 1), *ptr) > 0)
			{
				swap = *(ptr - 1);
				*(ptr - 1) = *ptr;
				*ptr = swap;
				ptr = tab;
			}
			else
				ptr++;
		}
	}
}
