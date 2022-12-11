#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program prints alphabets in lowercase and then in uppercase
 *
 * Return: 0
 */

int main(void)
{
char q;
for (q = 'a'; q <= 'z'; q++)
putchar(q);
for (q = 'A'; q <= 'Z'; q++)
putchar(q);
putchar('\n');
return (0);
}
