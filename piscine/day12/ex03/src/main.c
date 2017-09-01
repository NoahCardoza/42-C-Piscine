/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 20:39:47 by nocardoz          #+#    #+#             */
/*   Updated: 2017/08/24 22:39:23 by nocardoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int fd;

	fd = open("ft_hexdump", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(fd, "/usr/bin/hexdump $@;", 20);
	close(fd);
	return (0);
}
