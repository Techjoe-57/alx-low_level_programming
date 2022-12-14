#include "main.h"
/**
 *print_alphabet_x10 - this program prints 10 times the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char q;
	int i = 0;

	while (i < 10)
	{
		q = 'a';
		while (q <= 'z')
		{
			_putchar(q);
			q++;
		}

		_putchar('\n');
		i++;
	}
}
