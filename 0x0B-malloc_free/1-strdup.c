#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory
 * @str: string
 * Return: pointer of an array
 */

char *_strdup(char *str)
{
	char *strpt;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strpt = (char *)malloc(sizeof(char) * (i + 1));

	if (strpt == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strpt[j] = str[j];

	return (strpt);
}
