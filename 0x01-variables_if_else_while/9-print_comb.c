#include <stdio.h>

/**
 * main - program prints all the possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
int q;
for (q = '0' ; q <= '9' ; q++)
{
putchar(q);
if (q != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
