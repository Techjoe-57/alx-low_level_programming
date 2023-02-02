#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer to memory area
 * @src: source pointer to memory area
 * @n: number of bytes to memory area
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
