#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination to copy to
 * @src: the string to be copied
 * @n: the number of byte to use
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
