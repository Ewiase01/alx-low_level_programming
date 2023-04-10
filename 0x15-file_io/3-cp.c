#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 *
 * @file: the name of the file buffer is storing chars for
 *
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *a;

	a = malloc(sizeof(char) * 1024);

	if (a == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (a);
}

/**
 * close_file - closes file descriptors
 *
 * @fd: the file descriptor to be closed
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 *
 * @argc: the number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int i, j, k, m;
	char *a;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	a = create_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	k = read(i, a, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(a);
			exit(98);
		}

		m = write(j, a, k);
		if (j == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(a);
			exit(99);
		}

		k = read(i, a, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(a);
	close_file(i);
	close_file(j);

	return (0);
}
