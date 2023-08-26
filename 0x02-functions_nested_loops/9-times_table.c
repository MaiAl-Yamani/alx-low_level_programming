#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, mul, f;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			f = mul * i;
			_putchar(',');
			_putchar(' ');
			if (f <= 9)
			{
				_putchar(' ');
				_putchar(f + 48);
			}
			else
			{
				_putchar((f / 10) + 48);
				_putchar((f % 10) + 48);
			}
		}
		_putchar(36);
		_putchar('\n');
	}
}
