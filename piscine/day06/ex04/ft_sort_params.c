/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:12:07 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/16 21:41:06 by nocardoz         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	char **ptr;
	char *swap;

	argc++;
	ptr = ++argv;
	while (*(++ptr))
	{
		if (ft_strcmp(*(ptr - 1), *ptr) > 0)
		{
			swap = *(ptr - 1);
			*(ptr - 1) = *ptr;
			*ptr = swap;
			ptr = argv;
		}
	}
	while (*argv)
	{
		ft_putstr(*argv++);
		ft_putchar('\n');
	}
	return (0);
}
