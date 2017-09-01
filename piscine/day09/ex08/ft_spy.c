/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:39:27 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/18 16:06:19 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (--n && (*s1 || *s2) && *s1 == *s2)
		(s1++ && s2++);
	return (*s1 - *s2);
}

int		ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char *cpy;

	cpy = str;
	while (*cpy)
	{
		if (ft_is_uppercase(*cpy))
			*cpy += 32;
		cpy++;
	}
	return (str);
}

void	ft_trim(char *str, char **start, char **end)
{
	while ((*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	*start = str;
	while (*str && !(*str == 32 || (*str >= 9 && *str <= 13)))
		str++;
	*end = str;
}

int		main(int argc, char *argv[])
{
	char *s;
	char *e;

	argc++;
	while (*argv)
	{
		ft_trim(*argv, &s, &e);
		if (ft_strncmp(ft_strlowcase(s), "president", (int)(e - s)) == 0 ||
			ft_strncmp(ft_strlowcase(s), "attack", (int)(e - s)) == 0 ||
			ft_strncmp(ft_strlowcase(s), "powers", (int)(e - s)) == 0)
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		argv++;
	}
	return (0);
}
