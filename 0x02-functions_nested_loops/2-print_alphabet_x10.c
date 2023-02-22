#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)

{

	char str;

	int i = 0;

		while (i <= 9)
	{
		for (str = 'a'; str <= 'z'; str++)
		{
			_putchar(str);
		}

		_putchar('\n');

		i++;
	}
}
