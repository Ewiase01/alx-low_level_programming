#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * followed by a new line.
 * Return: Always0.
 */

int main(void)

{
	long a, lf;
	long b = 612852475143;
	double square = sqrt(b);

	for (a = 1; a <= square; a++)
	{
		if (b % a == 0)
		{
			lf = b / a;
		}
	}
	printf("%ld\n", lf);
	return (0);
}
