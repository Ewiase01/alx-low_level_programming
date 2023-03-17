#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 *
 * @argv: argument vector
 *
 * Return: nothing
 */
void _is_zero(char *argv[])
{
	int a, b = 1, c = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			b = 0;
			break;
		}
	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			c = 0;
			break;
		}
	if (b == 1 || c == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memory to zero in a new array
 *
 * @ar: char array
 * @lar: length of the char array
 *
 * Return: pointer
 */
char *_initialize_array(char *ar, int lar)
{
	int a = 0;

	for (a = 0; a < lar; a++)
		ar[a] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - determines the length of the number
 *
 * @argv: arguments vector
 * @n: row of the array
 *
 * Return: length of the number
 */
int _checknum(char *argv[], int n)
{
	int x;

	for (x = 0; argv[n][x]; x++)
		if (!isdigit(argv[n][x]))
		{
			printf("Error\n");
			exit(98);
		}
	return (x);
}

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b, c, d, e, f, g, h, i;
	char *x;

	if (argc != 3)
		printf("Error\n"), exit(98);
	a = _checknum(argv, 1), b = _checknum(argv, 2);
	_is_zero(argv), c = a + b, x = malloc(c + 1);
	if (x == NULL)
		printf("Error\n"), exit(98);
	x = _initialize_array(x, c);
	h = c - 1, f = a - 1, g = b - 1, i = e = 0;
	for (; h >= 0; h--, f--)
	{
		if (f < 0)
		{
			if (e > 0)
			{
				d = (x[h] - '0') + e;
				if (d > 9)
					x[h - 1] = (d / 10) + '0';
				x[h] = (d % 10) + '0';
			}
			f = a - 1, g--, e = 0, i++, h = c - (1 + i);
		}
		if (g < 0)
		{
			if (x[0] != '0')
				break;
			c--;
			free(x), x = malloc(c + 1), x = _initialize_array(x, c);
			h = c - 1, f = a - 1, g = b - 1, i = e = 0;
		}
		if (g >= 0)
		{
			d = ((argv[1][f] - '0') * (argv[2][g] - '0')) + (x[h] - '0') + e;
			e = d / 10, x[h] = (d % 10) + '0';
		}
	}
	printf("%s\n", x);
	return (0);
}
