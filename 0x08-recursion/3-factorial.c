#include "main.h"

/**
 * factorial - calculate the factorial of a number
 *
 * @n: the number to find its factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
