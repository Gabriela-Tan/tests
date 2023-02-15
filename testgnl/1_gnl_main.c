#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	char *line;
	int fd[4];
	size_t	i;

	char s1[] = "testgnl0.txt";
	char s2[] = "testgnl1.txt";
	char s3[] = "testgnl2.txt";
	char s4[] = "testgnl3.txt";
	fd[0] = open(s1, O_RDONLY);
	fd[1] = open(s2, O_RDONLY);
	fd[2] = open(s3, O_RDONLY);
	fd[3] = open(s4, O_RDONLY);
	i = 0;
	while (i < 4)
	{
		line = get_next_line(fd[i]);
		printf("fd: %d | %s : %s\n", fd[i], s1, line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s : %s\n", fd[i], s2, line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s : %s\n", fd[i], s3, line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s : %s\n", fd[i], s4, line);
		free(line);

		close(fd[i]);
		i++;
	}

	return (0);
}
