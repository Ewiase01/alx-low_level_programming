#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 *
 * @c: the char to print
 *
 * Return: on succes 1, -1 when error, an errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
