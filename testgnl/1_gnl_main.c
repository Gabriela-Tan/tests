#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	char *line;
	int fd[4];
	size_t	i;

	fd[0] = open("testgnl0.txt", O_RDONLY);
	fd[1] = open("testgnl1.txt", O_RDONLY);
	fd[2] = open("testgnl2.txt", O_RDONLY);
	fd[3] = open("testgnl3.txt", O_RDONLY);
	i = 0;
	while (i < 4)
	{
		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		close(fd[i]);
		i++;
	}

	return (0);
}
