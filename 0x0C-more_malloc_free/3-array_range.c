#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *x;
	int y;

	if (min > max)
	return (NULL);
	x = malloc(sizeof(*x) * ((max - min) + 1));
	if (x == NULL)
		return (NULL);
	for (y = 0; min <= max; y++, min++)
		x[y] = min;
	return (x);
}
