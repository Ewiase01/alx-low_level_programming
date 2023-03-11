#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: pointed memory area
 * @b: constant byte
 * @n: number of byte to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
