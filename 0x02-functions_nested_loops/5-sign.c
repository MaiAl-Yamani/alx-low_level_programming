#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: number to be checked
 *
 * Return: (res) 1 if n>0, 0 if n=0, -1 if n<0
 */
int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		res = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		res = 0;
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		res = -1;
	}

	return (res);
}
