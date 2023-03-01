#include "main.h"
#include <unistd.h>

/**
 * _putchar - the character c to stdout
 * @c: the character to print
 * Return: on success 1, -1 when error, an errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
