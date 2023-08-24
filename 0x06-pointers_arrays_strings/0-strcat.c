#include "main.h"
#include <string.h>
/**
 * _strcat - concatinate two string variables
 * @src: the first string variable pointer to src
 * @dest: the second string variable pointer to dest
 *
 * Description: concatinate two string variables and returns the concatinated string
 * Return: dest variable after concatination
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return dest;
}
