#include <stdio.h>

/**
 * main - computes and prints the sum of all th multiples
 * Return: Always 0.
 */
int main(void)
{
	int x, y;

	y = 0;

	while (x < 1024)
	{
		if
			((x % 3 == 0) || (x % 5 == 0))
			{
				y += x;
			}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
