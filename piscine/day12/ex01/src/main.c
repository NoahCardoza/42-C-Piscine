/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 10:56:34 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 22:35:36 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft_cat.h"

void	ft_puterror(char *str1, char *str2, char *str3)
{
	while (*str1)
		write(2, str1++, 1);
	while (*str2)
		write(2, str2++, 1);
	while (*str3)
		write(2, str3++, 1);
}

void	error_handel(char *file)
{
	if (errno == ENOENT)
		ft_puterror("cat: ", file, ": No such file or directory\n");
	else if (errno == EACCES)
		ft_puterror("cat: ", file, ": Permission denied\n");
	else if (errno == EISDIR)
		ft_puterror("cat: ", file, ": Is a directory\n");
}

int		main(int argc, char *argv[])
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
			if (errno == 0)
			{
				while ((ret = read(fd, buf, BUF_SIZE)))
					if (errno == 0)
						write(1, buf, ret);
					else
						break ;
			}
			error_handel(*argv);
			close(fd);
		}
	}
	return (0);
}
