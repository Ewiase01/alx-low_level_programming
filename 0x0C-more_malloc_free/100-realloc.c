#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated with a call
 * @old_size: the size, in bytes, of the allocated space
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: if new_size == old_size, return ptr
 * NULL if new_size is equal to zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
