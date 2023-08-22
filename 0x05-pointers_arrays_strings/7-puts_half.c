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
	for (n = ni; *str != '\0'; str++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
