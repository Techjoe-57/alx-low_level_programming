#include "main.h"

/**
 * _puts_recursion - func that prints a string follow by a new line
 * @s: point to string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
