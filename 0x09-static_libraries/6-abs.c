#include "main.h"
/**
 * _abs - returns the absolute of an integer
 * @n: int number
 *
 * Return: abs
 */
int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		abs = n;
	}
	else
	{
		abs = -1 * n;
	}

	return (abs);
}
