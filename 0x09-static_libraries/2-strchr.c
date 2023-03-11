#include "main.h"

/**
 * _strchr - ocates a character in a string
 *
 * @c: first occurrence of the character
 * @s: the string
 *
 * Return: s or 0
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (0);
}
