#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *
 * @accept: which its bytes is accepted
 * @s: which bytes from its initial segment
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
