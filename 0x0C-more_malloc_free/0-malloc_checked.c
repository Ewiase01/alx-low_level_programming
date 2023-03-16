#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 *
 * @b: number the bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
