#include "main.h"

/**
 * _sqrt_recursion - func that returns the natural
 * square root of a number
 * @n: the number whose square root is to be found
 * Return: return the natural square root, else return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (help_func(n, 1));
}

/**
 * help_func - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare with `c`
 * Return: square root if natural square root, or -1 if none found
 */

int help_func(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (help_func(c, i + 1));
	else
		return (-1);
}
