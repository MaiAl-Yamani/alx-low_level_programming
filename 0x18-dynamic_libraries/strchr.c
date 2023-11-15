#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to string s
 * @c: character to be located
 *
 * Return:  first occurrence of the char c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
