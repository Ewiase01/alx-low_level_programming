#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be retruned
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
