#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @c: integer could be +ve or -ve
 * Return: 1
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
