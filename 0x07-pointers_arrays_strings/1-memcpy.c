#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @src: origin memory area
 * @dest: destination memory area
 * @n: bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
