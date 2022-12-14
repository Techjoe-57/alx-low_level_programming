#include "main.h"
/**
 * _islower - program checks for lowercase character return 1.
 * @c: char type letter
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
