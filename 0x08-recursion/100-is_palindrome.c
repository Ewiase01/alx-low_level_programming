#include "main.h"

int _pal(char *s, int i, int t);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palidrome
 *
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to check its length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pal - checks the char
 *
 * @s: the string
 * @i: iterator
 * @t: length of the string
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int _pal(char *s, int i, int t)
{
	if (*(s + i) != *(s + t - 1))
		return (0);
	if (i >= t)
		return (1);
	return (_pal(s, i + 1, t - 1));
}
