#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)

{
	int a = 0;
	long int  b = 1;
	long int c = 2;

	while (a < 50)
	{
	if (a == 0)
	printf("%ld", b);
	else if (a == 1)
	printf(", %ld", c);
	else
	{
		c += b;
		b = c - b;
		printf(", %ld", c);
	}
	++a;
	}
	return (0);
}
