#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the point to convert
 * Return: Always 0
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int y = 0;
	int z = 1;
	int c = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			z *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			c = 1;
			y = (y * 10) + (s[x] - '0');
			x++;
		}
		if (c == 1)
		{
			break;
		}
		x++;
	}
	y *= z;
	return (y);
}
