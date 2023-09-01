#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to memory area dest
 * @src: pointer to memory area src
 * @n: n bytes from memory area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
