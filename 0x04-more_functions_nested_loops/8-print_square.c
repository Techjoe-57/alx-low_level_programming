#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */

void print_square(int size)
{
	int x, y;
	
	y = 0;
	
	if (size < 1)
		_putchar('\n');
	
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putcha('\n');
		y++;
	}
}
