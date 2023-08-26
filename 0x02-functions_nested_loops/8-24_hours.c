#include "main.h"
/**
 * jack_bauer - prints every min of the day starting from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	/* ij:kl */
	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
		for (j = 0; j < 10; j++)
		{
			_putchar(j + 48);
			_putchar(':');
			for (k = 0; k < 10; k++)
			{
				_putchar(k + 48);
				for (l = 0; l < 10; l++)
				{
					_putchar(l  + 48);
					_putchar('\n');
				}
			}
		}
	}
}
