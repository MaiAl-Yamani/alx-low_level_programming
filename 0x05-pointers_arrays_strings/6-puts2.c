#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to char str
 *
 * Description: prints every other character of a string
 */
void puts2(char *str)
{
	for (; *str != '\0'; str += 2)
	{
		if (*str == '\0')
		{
			break;
		}
		_putchar(*str);
	}

	_putchar('\n');
}
