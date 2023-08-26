#include "main.h"
/**
 * print_number -  prints an integer
 * @n: the interger n
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar(45);
		m = m * -1;
	}
	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + 48);
}
