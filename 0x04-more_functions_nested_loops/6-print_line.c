#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
