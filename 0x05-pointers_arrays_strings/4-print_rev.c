#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer to s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = -2;

	for (; ; s--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}
