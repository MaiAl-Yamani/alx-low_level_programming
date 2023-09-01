#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char s
 * @b: char (constant byte)
 * @n: unsigned int, first n bytes of memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
