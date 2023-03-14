#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1 - the first character to concatenate
 * @s2 - the second character to concatenate
 *
 * Return: concatenated strings on succes,
 * NULL failure
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	while (s1 && s1[c])
		c++;
	while (s2 && s2[d])
		d++;
	x = malloc(sizeof(char) * (c + d + 1));
	if (x == NULL)
		return (NULL);
	if (s1)
	{
		while (a < c)
		{
			x[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (c + d))
		{
			x[a] = s2[b];
			a++;
			b++;
		}
	}
	x[a] = '\0';
	return (x);
}
