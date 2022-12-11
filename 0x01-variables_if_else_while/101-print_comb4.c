#include <stdio.h>

/**
 * main - program prints all combinations of  three digits
 *
 *
 * Return: 0
 */
int main(void)
{
int k, l, m, n;
for (k = 0; k < 1000; k++)
{
l = k / 100;
m = (k / 10) % 10;
n = k % 10;
if (l < m && m < n)
{
putchar(l + '0');
putchar(m + '0');
putchar(n + '0');
if (k < 700)
{
putchar(44);
putchar(32);
}
}    }
putchar('\n');
return (0);
}
