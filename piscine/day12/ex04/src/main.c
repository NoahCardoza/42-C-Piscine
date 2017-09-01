/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 20:39:47 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 23:02:53 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_last.h"
#include <fcntl.h>
#include <unistd.h>

/*
** Makes use of Apples source code
*/

int	main(void)
{
	int		fd1;
	int		fd2;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd1 = open("/usr/bin/last", O_RDONLY, 0755);
	fd2 = open("ft_last", O_TRUNC | O_WRONLY, 0755);
	while ((ret = read(fd1, buf, BUF_SIZE)))
		write(fd2, buf, ret);
	close(fd1);
	close(fd2);
	return (0);
}
