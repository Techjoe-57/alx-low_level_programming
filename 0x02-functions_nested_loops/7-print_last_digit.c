#include "main.h"
/**
 * print_last_digit - program prints last digit of number
 * @n: int datatype number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
