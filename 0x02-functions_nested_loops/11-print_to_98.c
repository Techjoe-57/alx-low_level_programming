#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @q: int datatype number
 */
void print_to_98(int q)
{
	if (q > 98)
	{
		while (q >= 98)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
			q--;
		}
	}
	else
	{
		while (q <= 98)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
			q++;
		}
	}
	printf("\n");
}
