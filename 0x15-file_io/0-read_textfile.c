#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: File being read
 * @letters: letters to be read
 * Return: w or 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w;
	ssize_t fd;
	ssize_t t;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
		t = read(fd, buf, letters);
		w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
