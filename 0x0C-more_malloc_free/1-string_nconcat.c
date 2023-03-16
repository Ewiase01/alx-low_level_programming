#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: bytes
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	c = a + n;

	x = malloc(c + 1);

	if (x == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
		if (d < a)
			x[d] = s1[d];
		else
			x[d] = s2[d - a];
	x[d] = '\0';
	return (x);
}
