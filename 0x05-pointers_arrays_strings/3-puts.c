#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: pointer to char str
 *
 * Description: print a string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	
	_putchar('\n');
}
