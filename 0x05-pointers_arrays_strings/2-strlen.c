#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int xcm = 0;

	while (*s != '\0')
	{
		xcm++;
		s++;
	}

	return (xcm);
}
