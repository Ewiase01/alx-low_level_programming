#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9.
 * @c:the number to be checked.
 * Return: print 1 if number is a digit, 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
