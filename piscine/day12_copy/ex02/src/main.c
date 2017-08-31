#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void) // int argc, char const *argv[]
{
	int fd;

	fd = open("ft_tail", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(fd, "/usr/bin/tail $@;", 17);
	close(fd);
	return 0;
}
