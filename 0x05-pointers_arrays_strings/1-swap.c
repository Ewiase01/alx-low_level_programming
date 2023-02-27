#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)

{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
