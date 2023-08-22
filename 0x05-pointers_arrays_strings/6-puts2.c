#include "main.h"
/**
 * _puts2 - prints every other character of a string
 * @str: pointer to char str
 *
 * Description: prints every other character of a string
 */
void _puts2(char *str)
{
	for (; *str != '\0'; str+2)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
