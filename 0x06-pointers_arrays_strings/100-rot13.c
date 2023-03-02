#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string
 *
 * @c: string to encode
 *
 * Return: the encoded string
 */

char *rot13(char *c)
{
	int x;
	int y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (c[x] == a[y])
			{
				c[x] = b[y];
				break;
			}
		}
	}

	return (c);
}
