/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 10:15:44 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 12:07:40 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int ft_compact(char **tab, int length)
{
	int count;
	int i;
	int j;
	char *start;
	// char c;

	start = *tab;
	count = 0;
	i = 0;
	// while (i++ < length)
	// 	count += !!tab[i];
	printf("%d\n", count);
	i = 0;
	j = 0;
	while (i < length)
	{
		if (*tab[7])
		{
			printf("%c\n", *tab[i]);
			// c = *tab[i];
			// *tab[i] = *tab[j];
			// *tab[j] = c;
			// j++;
			// i = j;
		}
		i++;
	}
	// {
	// 	if (!*(tab + i++))
	// 	{
	// 		ft_swap(tab[i], tab[j++]);
	// 		i = 0;
	// 	}
	// }
	return (count);
}


int main()
{
	char str[] = "\0\0\0he\0\0\0llo\0\0\0";
	char *strp;
	strp = str;
	// printf("%s\n", str+7);
	printf("%d\n", ft_compact(&strp, 5));
	// printf("%s\n", str);
	return (0);
}