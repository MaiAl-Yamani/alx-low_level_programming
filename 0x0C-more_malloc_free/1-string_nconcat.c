#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	char *_concat, *ptr;
	int i, j;
	int sign = n;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (sign >= len2)
	{
		sign = len2;
		_concat = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	_concat = malloc(sizeof(char) * (len1 + n + 1));
	if (_concat == NULL)
	{
		return (NULL);
	}
	ptr = _concat;
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < sign; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i++] = '\0';
	return (_concat);
}
