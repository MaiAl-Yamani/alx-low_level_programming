#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer to s
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	int j = n - 1;

	while (*(s + j) >= 0)
	{
		_putchar(*(s + j));
	}
	_putchat('\0');
}
