#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @s: string value pointer
 * @c: occurance of character
 * Return: the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
