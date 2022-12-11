#include <stdio.h>

/**
 * main - program prints all the numbers in base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
char q;
for (q = '0'; q <= '9'; q++)
putchar(q);
for (q = 'a'; q <= 'f'; q++)
putchar(q);
putchar('\n');
return (0);
}
