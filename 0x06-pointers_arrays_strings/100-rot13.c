#include "main.h"

/**
 *rot13 - encoding a string using rot13.
 *@s: the string to be encoded to rot13.
 *Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char string_rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char string_alpha[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				storel[s[i] - 97] : storeh[s[i] - 65];
		}
	}
	return (s);
}
