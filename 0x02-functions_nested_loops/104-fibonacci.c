#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and2,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)

{
	int a;
	unsigned long b = 0, c = 1, d;
	unsigned long e, f, g, h;
	unsigned long i, j;

	for (a = 0; a < 92; a++)
	{
		d = b + c;
		printf("%lu, ", d);
		b = c;
		c = d;
	}
	e = b / 10000000000;
	g = c / 10000000000;
	f = b % 10000000000;
	h = c % 10000000000;
	for (a = 93; a < 99; a++)
	{
		i = e + g;
		j = f + h;
		if (f + h > 9999999999)
		{
			i += 1;
			j %= 10000000000;
		}
		printf("%lu%lu", i, j);
		if (a != 98)
			printf(", ");
		e = g;
		f = h;
		g = i;
		h = j;
	}
	printf("\n");
	return (0);
}
