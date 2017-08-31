/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 10:56:34 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 15:57:02 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "ft_tail.h"

int ft_fsize(int fd)
{
	int size;
	char buf[1];

	size = 0;
	while (read(fd, buf, 1))
		size++;
	return (size);
}

int ft_fread_between(int fd, int byte1, int byte2)
{
	char buf[1];

	size = 0;
	while (read(fd, buf, 1))
		if (byte1 >= size && byte2 >= size)
		byte--;
	return (size);
}

// void ft_getline(int fd, int lines)
// {
// 	int		ret;
// 	char	buf[BUF_SIZE + 1];
// 	// int 	i;
// 	int		size;
// 	lines++;	
// 	size = 0;
// 	while ((ret = read(fd, buf, BUF_SIZE)))
// 	{
// 		// i = 0;
// 		size += ret;
// 		// while (i < ret)
// 		// {
// 		// 	lines -= buf[i] == '\n';
// 		// 	if (lines)
// 		// 		write(1, &buf[i++], 1);
// 		// 	else
// 		// 	{
// 		// 		printf("\n%d\n", size);
// 		// 		return ;
// 		// 	}
// 		// }
// 	}
// 	printf("%d\n", size);
// }

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
		ft_puterror("ft_cat: ", file, ": No such file or directory\n");
		return (errno);
	}
	else if (errno == 13)
	{
		ft_puterror("ft_cat: ", file, ": Permission denied\n");
		return (errno);
	}
	return (0);
}

int		main(int argc, char	*argv[])
{
	int		fd;
	


	argc++;	
	// if (argc == 1)
	// 	while ((ret = read(0, buf, BUF_SIZE)))
	// 		write(1, buf, ret);
	// else
	// {
	while (*++argv)
	{
		fd = open(*argv, S_IREAD);
		ft_fread_between(0, 5);
		// printf("%d\n", ft_fsize(fd));
		// if (error_handel(*argv))

		// {
		// 	close(fd);
		// 	return (errno);
		// }
		// ft_getline(fd, 10);
		close(fd);
	}
	// }
	return (0);
}
