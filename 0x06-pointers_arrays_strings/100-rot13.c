#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string s
 *
 * Return: s
 */
char *rot13(char *s)
{
	int cnt = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + cnt) == alphabet[i])
			{
				*(s + cnt) = rot13[i];
				break;
			}
		}
		cnt++;
	}

	return (s);
}
