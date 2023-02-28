#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * followed by a new line.
 *
 * @n: the number of elements of the array to be printed
 * @a: name of the array
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
	}
	if (x != (n - 1))
	{
		printf(", ");
	}
	printf("\n");
}
