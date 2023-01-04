#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a stringfor any
 * any of a set of bytes
 * @s: pointer to search string
 * @accept: target matches
 * Return: returns a pointer s to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
