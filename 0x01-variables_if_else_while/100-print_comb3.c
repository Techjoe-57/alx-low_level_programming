#include <stdio.h>

/**
 * main - program prints all combinations for two digits
 *
 * Return: 0
 */
int main(void)
{
int k, l, m;
k = 0;
while (k < 100)
{
l = k % 10; /* represent single digit */
m = k / 10;
if (m < l)
{
putchar(m + '0');
putchar(l + '0');
if (k < 89)
{
putchar(44);
putchar(32);
}
}
k++;
}
putchar('\n');
return (0);
}
