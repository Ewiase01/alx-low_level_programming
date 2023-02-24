#include "main.h"

/**
 * print_times_table - prints the times table of the int
 * @n: the value to be printed
 */
void print_times_table(int n)
{
	int i, m, p;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (m = 0; m <= n; m++)
			{
				p = i * m;
				if (m != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (p < 10 && m != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100 && m != 0)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
					_putchar((p % 10) + '0');
				}
				else
					_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
