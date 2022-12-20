#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i, mag, half;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	mag = i - 1;
	half = mag / 2;
	while (half >= 0)
	{
		first = s[mag - half];
		last = s[half];
		s[half] = first;
		s[mag - half] = last;
		half--;
	}
}
