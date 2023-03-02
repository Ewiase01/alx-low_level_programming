#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int cr);

/**
 * add_strings - adds up two string
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer that the function will use to store the result
 * @cr: the current index of the buffer
 * Return: Always 0 or positive numbers
 */
char *add_strings(char *n1, char *n2, char *r, int cr)

{
	int x, y = 0;

	for (; *n1 && *n2; n1--, n2--, cr--)
	{
		x = (*n1 - '0') + (*n2 - '0');
		x += y;
		*(r + cr) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n1; n1--, cr--)
	{
		x = (*n1 - '0') + y;
		*(r + cr) = (x % 10) + '0';
		y = x / 10;
	}

	for (; *n2; n2--, cr--)
	{
		x = (*n2 - '0') + y;
		*(r + cr) = (x % 10) + '0';
		y = x / 10;
	}

	if (y && cr >= 0)
	{
		*(r + cr) = (y % 10) + '0';
		return (r + cr);
	}

	else if (y & (cr < 0))
		return (0);

	return (r + cr + 1);
}

/**
 * infinite_add - adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the size of the buffer
 * Return: Always 0 or positive numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b = 0, i = 0;

	for (a = 0; *(n1 + a); a++)
		b++;

	for (a = 0; *(n2 + a); a++)
		i++;

	if (size_r <= b + 1 || size_r <= i + 1)
		return (0);

	n1 += b - 1;
	n2 += i - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
