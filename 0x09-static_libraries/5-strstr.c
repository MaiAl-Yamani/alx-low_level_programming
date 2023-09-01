#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int sz = 0;

	while (needle[sz] != '\0')
	{
		sz++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != sz)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}

	return (0);
}
