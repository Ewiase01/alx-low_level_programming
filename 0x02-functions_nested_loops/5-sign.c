#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if n# > 0, 0 if n# is 0, -1 if n# < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
