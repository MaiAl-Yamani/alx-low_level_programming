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
	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
			{
				haystack++;
			}
			else
			{
				return (haystack);
			}
		}
	}

	return (0);
}
