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
	int a, b, c, d;
	int x[] = {25, 10, 5, 2, 1};

	a = b = c = d = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	if (b <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (x[a] != '\0')
	{
		if (b >= x[a])
		{
			d = (b / x[a]);
			c += d;
			b -= x[a] * d;
		}
		b++;
	}
	printf("%d\n", c);
	return (0);
}
