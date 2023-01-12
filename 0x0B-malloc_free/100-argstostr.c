#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *apt;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	apt = malloc((c + 1) * sizeof(char));

	if (apt == NULL)
	{
		free(apt);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			apt[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			apt[ia] = av[i][j];
	}
	apt[ia] = '\0';

	return (apt);
}
