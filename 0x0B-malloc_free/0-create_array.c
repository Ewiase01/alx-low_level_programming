#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 *
 * @size: the size of the array
 * @c: character to initialize
 *
 * Return: the pointer to the array, or NULL if it faills or the size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}

