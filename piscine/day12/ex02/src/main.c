/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 20:39:47 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 22:39:27 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd;

	fd = open("ft_tail", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(fd, "/usr/bin/tail $@;", 17);
	close(fd);
	return (0);
}
