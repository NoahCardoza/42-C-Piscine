/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:09:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/22 23:11:14 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char **ptr;
	char *swap;

	if (*++tab)
	{
		ptr = tab;
		while (*ptr)
		{
			if (cmp(*(ptr - 1), *ptr) > 0)
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
