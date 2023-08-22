#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer to s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	for (n = -2; ; s--)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
