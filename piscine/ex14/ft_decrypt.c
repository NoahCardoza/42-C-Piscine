/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 12:10:32 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:06:16 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strcount(char *str, char c)
{
	int count;

	count = 0;
	while (*str)
		count += (*str++ == c);
	count += *(str - 1) != c;
	return (count);
}

char	**ft_split(char *str, char d)
{
	char **arr;
	int len;
	int i;

	len = ft_strcount(str, d);
	arr = (char**)malloc((len + 1) * sizeof(char**));
	i = 0;
	while (i < len)
	{
		arr*
	}
	printf("%d\n", len);
	return (arr);
}

// t_perso **ft_decrypt(char *str)
// {

// }

int		main(void)
{
	char **arr;

	arr = ft_split("Age|Nom;Age2|Nom2;Age3|Nom3", ';');
	return (0);
}