#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 *  @q: int datatype number
 *  Return: value
 */

int _abs(int q)
{
	if (q < 0)
	{
		return (q * -1);
	}
	else
	{
		return (q);
	}
}
