#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - point to a 2 dimensional array of integers
 *
 * @width: 1st dimensional int
 * @height: 2nd dimensional int
 *
 * Return: pointer to the arrays if success,
 * NULL if 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);
	a = (int **) malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = (int *) malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			free(a);
			for (y = 0; y <= x; y++)
				free(a[y]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
