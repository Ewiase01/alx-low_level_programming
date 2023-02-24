#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)

{
	long int a, b, c, d;

	a = 1;
	b = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
