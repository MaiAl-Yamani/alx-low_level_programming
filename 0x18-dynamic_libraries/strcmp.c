#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: (out) 0 if s1=s2, -ve if s1<s2, +ve if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, out = 0;

	while (out == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		out = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (out);
}
