#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer to string s
 *
 * Return: s
 */
char *leet(char *s)
{
	int cnt = 0, i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + cnt) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + cnt) == lower[i] || *(s + cnt) == upper[i])
			{
				*(s + cnt) = nums[i];
				break;
			}
		}
		cnt++;
	}

	return (s);
}
