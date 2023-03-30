#include "lists.h"
#include <unistd.h>

/**
* _putchar - writes charaacter c to stdout
* @c: the character to print
* Return: on succes 1, -1 when error, and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
