#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @y: letter being tested
 * Return: Always 0
 */

int _islower(int y)
{
	if (y >= 97 && y <= 122)
		return (1);
	else
		return (0);
}
