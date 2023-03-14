#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - duplicate the string str
 *
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string when successful,
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *x;
	unsigned int y, z;

	y = 0;
	z = 0;

	if (str == NULL)
		return (NULL);
	while  (str[z])
		z++;
	x = malloc(sizeof(char) * (z + 1));
	if (x == NULL)
		return (NULL);
	while ((x[y] = str[y]) != '\0')
		y++;
	return (x);
}
