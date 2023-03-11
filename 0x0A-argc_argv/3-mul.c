#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, else print 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);

		return (0);
	}

	printf("Error\n");

	return (1);
}
