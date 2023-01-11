#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *q;
	unsigned int i;

	if (size == 0)
		return (NULL);

	q = malloc(sizeof(c) * size);

	if (q == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		q[i] = c;

	return (q);
}
