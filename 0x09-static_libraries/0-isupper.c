#include "main.h"

/**
 * _isupper - the uppercase characters.
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 if c is otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
