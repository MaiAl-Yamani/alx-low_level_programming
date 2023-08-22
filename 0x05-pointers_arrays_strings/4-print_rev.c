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

	for (s[n] = '\0'; ; s--)
	{
		if (s[n] == '\0')
		{
			continue;
		}
		else
		{
			_putchar(s[n]);
		}
	}

	_putchar('\n');
}
