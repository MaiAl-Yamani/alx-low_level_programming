#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer to s
 *
 * Return: void
 */
void print_rev(char *s)
{
	for (; ; s--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
