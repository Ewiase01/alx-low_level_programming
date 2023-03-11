#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: length of argv
 * @argv: number of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int x[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	c = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (b = 0; b < 5 && a >= 0; b++)
	{
		while (a >= x[b])
		{
			c++;
			a -= x[b];
		}
	}
	printf("%d\n", c);
	return (0);
}
