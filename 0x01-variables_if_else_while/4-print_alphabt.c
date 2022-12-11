#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program prints alphabets in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
char qt;
for (qt = 'a'; qt <= 'z'; qt++)
if (qt != 'q' && qt != 'e')
putchar(qt);
putchar('\n');
return (0);
}
