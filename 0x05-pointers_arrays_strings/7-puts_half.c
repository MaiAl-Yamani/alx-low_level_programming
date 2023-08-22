#include <string.h>
#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: pointer to char str
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;

	int ni = (strlen(str) - 1) / 2;
	for (n = ni; n < strlen(str); n++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
