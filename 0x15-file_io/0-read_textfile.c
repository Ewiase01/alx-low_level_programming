#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: the text file being read
 * @letters: number of letters to be read
 *
 * Return: the actual number of letters it could read and print
 * or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t y;
	ssize_t z;
	ssize_t i;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	i = read(y, x, letters);
	z = write(STDOUT_FILENO, x, i);
	free(x);
	close(y);
	return (z);
}
