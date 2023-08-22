#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer to s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = -1;

	if (s[n] == '\0')
	{
		n--;
		continue;
	}
	else
	{
		for (; ; s--)
		{
			_putchar(s[n]);
			n--;
		}
	}

	_putchar('\n');
}
