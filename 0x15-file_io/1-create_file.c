#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: a pointer to the file to be created
 * @text_content: a pointer to a string
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
