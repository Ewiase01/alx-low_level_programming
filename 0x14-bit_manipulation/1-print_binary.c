#include "main.h"

/**
 * print_binary - prints the binary representation
 *
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int x;

	for (a = 63; a >= 0; a--)
	{
		x = n >> a;
		if (x & 1)
		{
			_putchar('1');
			b++;
		}
		else if (b)
			_putchar('0');
	}
	if (!b)
		_putchar('0');
}
