#include "main.h"
/**
 * _strncpy - copy a string
 * @src: the first string pointer to src
 * @dest: the second string pointer to dest
 * @n: number of bytes written
 *
 * Description: copies a string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

