#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer to string .
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pal_1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int pal_1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pal_1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - empty string is  palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal_1(s, len - 1));
}
