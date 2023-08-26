#include "main.h"
/**
 * print_number -  prints an integer
 * @n: the interger n
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m, d, cnt;

	cnt = 1;

	if (n < 0)
	{
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	while (d > 9)
	{
		d = d / 10;
		cnt = cnt * 10;
	}
	for ( ; cnt >= 1; cnt /= 10)
	{
		_putchar(((m / cnt) % 10) + 24);
	}

	return (0);
}
