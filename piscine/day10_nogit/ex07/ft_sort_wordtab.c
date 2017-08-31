/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:41:00 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/21 16:08:49 by nocardoz         ###   ########.fr       */
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
	return (*s1 - *s2);
}

void ft_sort_wordtab(char **tab)
{
	char **ptr;
	char *swap;

	if (*++tab)
	{
		ptr = tab;
		while (*(++ptr))
		{
			if (ft_strcmp(*(ptr - 1), *ptr) > 0)
			{
				swap = *(ptr - 1);
				*(ptr - 1) = *ptr;
				*ptr = swap;
				ptr = tab;
			}
		}
	}
}

// int		main(int argc, char *argv[])
// {
// 	ft_sort_wordtab(argv);
// 	while (*argv)
// 	{
// 		ft_putstr(*argv++);
// 		ft_putchar('\n');
// 	}
// 	return (0);
// }
