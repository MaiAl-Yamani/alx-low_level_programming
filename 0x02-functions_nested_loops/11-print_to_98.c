#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n : int number to start with
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	unsigned int j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i <= 9 && i >= 0)
			{
				_putchar(i + 48);
			}
			else if (i <= 9 && i < 0)
			{
				_putchar(45);
				_putchar(-i + 48);
			}
			else
			{
				for (j = 1; j <= (sizeof(n) / sizeof(int)); j++)
				{
					_putchar((i / 10) + 48);
				}
				_putchar((i % 10) + 48);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i <= 9)
			{
				_putchar(i + 48);
			}
			else
			{
				for (j = 1; j <= (sizeof(n) / sizeof(int)); j++)
				{
					_putchar((i / 10) + 48);
				}
				_putchar((i % 10) + 48);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar(57);
		_putchar(56);
	}
	_putchar('\n');
}
