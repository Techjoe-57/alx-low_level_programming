#include <stdio.h>

/**
 * main - program prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
char q;
for (q = 'z'; q >= 'a'; q--)
putchar(q);
putchar('\n');
return (0);
}
