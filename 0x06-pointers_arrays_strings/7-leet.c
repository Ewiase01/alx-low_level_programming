#include "main.h"

/**
 * leet - encodes string into 1337
 *
 * @c: encode character
 *
 * Return: encoded character
 */

char *leet(char *c)
{
	int x, y;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (c[x] == a[y])
			{
				c[x] = b[y];
			}
		}
	}
	return (c);
}
