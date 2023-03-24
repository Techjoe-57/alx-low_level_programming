#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer of memory bytes
 * @b: constant byte
 * @n: number of memory bytes
 * Return: pointer of memory bytes s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
