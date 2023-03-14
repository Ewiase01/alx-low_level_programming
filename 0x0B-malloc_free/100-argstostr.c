#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of the program
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, else NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			d++;
		d++;
	}
	x = malloc(sizeof(char) * (d + 1));
	if (x == NULL)
		return (NULL);
	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			x[c] = av[a][b];
			c++;
		}
		x[c] = '\n';
		c++;
	}
	return (x);
}
