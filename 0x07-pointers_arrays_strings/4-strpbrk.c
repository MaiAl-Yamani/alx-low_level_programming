#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string of accepted bytes
 *
 * Return: s a pointer to the byte in s matching accept bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
