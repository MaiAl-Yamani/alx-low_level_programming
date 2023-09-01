#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to accept
 *
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
				}
			}
		}
		else
		{
			return (count);
		}
	}

	return (count);
}
