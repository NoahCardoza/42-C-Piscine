/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:09:21 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 16:12:27 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s2 - *s1);
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	char **ptr;
	char *swap;

	if (*++tab)
	{
		ptr = tab;
		while (*(++ptr))
		{
			if (cmp(*(ptr - 1), *ptr) > 0)
			{
				swap = *(ptr - 1);
				*(ptr - 1) = *ptr;
				*ptr = swap;
				ptr = tab;
			}
		}
	}
}


int		main(int argc, char *argv[])
{
	ft_advanced_sort_wordtab(argv, &ft_strcmp);
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
	return (0);
}
