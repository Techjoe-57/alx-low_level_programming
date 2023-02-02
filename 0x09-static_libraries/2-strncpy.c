#include "main.h"

/**
 *_strncpy - copies a string
 * @src: source string
 * @dest: destination string
 * @n: number
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0;

	while (n > k)
	{
		if (src[k] == '\0')
		{
			for (; k < n; k++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[k];
			k++;
			i++;
		}
	}

	return (dest);
}
