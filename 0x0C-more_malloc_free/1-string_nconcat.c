#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int type that is first n bytes in s2
 *
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, j;
	int sign = n;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (sign >= len2)
	{
		sign = len2;
		concat = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j <= sign; j++)
	{
		concat[i++] = s2[j];
	}
	concat[i++] = '\0';
	return (concat);
}
