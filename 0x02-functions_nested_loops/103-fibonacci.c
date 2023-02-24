#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: Always 0.
 */

int main(void)

{
	int a = 0;
	long b = 1, c = 2, d = c;
		while (b + c < 4000000)
		{
			c += b;
			if (c % 2 == 0)
				d += c;
			b = c - b;
			++a;
		}
	printf("%ld\n", d);
	return (0);
}
