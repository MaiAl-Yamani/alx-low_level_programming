#include "main.h"
/**
 * print_last_digit- prints last digit of number n
 * @n: integer input
 *
 * Return: (last_digit)
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
