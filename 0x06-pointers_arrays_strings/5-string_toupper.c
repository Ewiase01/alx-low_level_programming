#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 *
 * @x: string to change the case
 *
 * Return: new case x
 */

char *string_toupper(char *x)
{
	int s = 0;

		while (x[s] != '\0')
		{
			if (x[s] >= 'a' && x[s] <= 'z')
				x[s] = x[s] - 32;
			s++;
		}
	return (x);
}
