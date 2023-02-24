#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)

{
	long int a, b, c, sum;

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
		sum  = b + c;
		b = c;
		c = sum;
	}
	return (0);
}
