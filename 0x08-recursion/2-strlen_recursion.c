#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer for string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}
