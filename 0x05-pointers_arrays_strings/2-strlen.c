#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: pinter to char s
 *
 * Description: returns the length of a string
 * return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
