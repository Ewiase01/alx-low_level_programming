#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)

{
	int x;
	long int a = 0, b = 1, d;

	for (x = 0; x < 50; x++)
	{
		d = a + b;
		printf("%lu", d);

		a = b;
		b = d;

		if (x == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
