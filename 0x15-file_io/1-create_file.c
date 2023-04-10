#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	int y = write(x, text_content, strlen(text_content));

	if (filename == NULL)
	{
		return (-1);
	}

	if (x == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{

		if (y == -1)
		{
			close(x);
			return (-1);
		}
	}

	close(x);
	return (1);
}
