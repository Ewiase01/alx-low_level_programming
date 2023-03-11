#include "main.h"

/**
 * _strpbrk - earches a string for any of a set of bytes
 *
 * @s: the string to locate the first occurrence
 * @accept: string to return
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
