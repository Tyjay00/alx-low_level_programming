#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes at a time.
 * @file: name of the file buffer it is storing chars for.
 *
 * Return: allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * @fd: descriptor to be closed.
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 *@argc: The number of arguments.
 *@argv: Array of pointers to the arguments.
*/

int main(int argc, char *argv[])
{
	int to, r, from, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(from, buffer, 1024);
	from = open(argv[1], O_RDONLY);

	do {
		to = open(argv[2], O_WRONLY | O_APPEND);
		r = read(from, buffer, 1024);
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
