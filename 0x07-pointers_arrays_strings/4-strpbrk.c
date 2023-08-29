#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to string of accepted bytes
 *
 * Return: res; a pointer to the byte in s matching accept bytes
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s != *accept)
			{
				s++;
			}
			else
			{
				return (s);
			}
		}
	}

	return (0);
}
