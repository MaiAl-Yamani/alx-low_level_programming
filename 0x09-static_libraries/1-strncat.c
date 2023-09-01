#include "main.h"
#include <string.h>
/**
 * _strncat - concatinate two string variables
 * @src: the first string variable pointer to src
 * @dest: the second string variable pointer to dest
 * @n: number of bytes from src
 *
 * Description: concatinate two string variables
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
