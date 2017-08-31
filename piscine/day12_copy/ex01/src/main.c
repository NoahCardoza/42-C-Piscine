/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 10:56:34 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 17:01:32 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "ft_cat.h"

void	ft_puterror(char *str1, char *str2, char *str3)
{
	while(*str1)
		write(2, str1++, 1);
	while(*str2)
		write(2, str2++, 1);
	while(*str3)
		write(2, str3++, 1);
}

int error_handel(char *file)
{
	if (errno == ENOENT)
	{
		ft_puterror("cat: ", file, ": No such file or directory\n");
		return (errno);
	}
	else if (errno == 13)
	{
		ft_puterror("cat: ", file, ": Permission denied\n");
		return (errno);
	}
	return (0);
}

int		main(int argc, char	 *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		while ((ret = read(0, buf, BUF_SIZE)))
			write(1, buf, ret);
	else
	{
		while (*++argv)
		{
			fd = open(*argv, S_IREAD);
			if (error_handel(*argv))
			{
				close(fd);
				return (errno);
			}
			while ((ret = read(fd, buf, BUF_SIZE)))
				write(1, buf, ret);
			close(fd);
		}
	}
	return (0);
}
