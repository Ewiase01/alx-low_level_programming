#include "main.h"

int _prime(int n, int y);

/**
 * is_prime_number - returns a prime number
 *
 * @n: the number to be checked
 *
 * Return: 1 if n is a prime number, else return 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - check if number is a prime
 *
 * @n: the number to be checked
 * @y: iterator
 *
 * Return: 1 if n is a prime, else print 0
 */
int _prime(int n, int y)
{
	if (n <= 1)
		return (0);
	if (n % y == 0 && y > 1)
		return (0);
	if ((n / y) < y)
		return (1);
	return (_prime(n, y + 1));
}
