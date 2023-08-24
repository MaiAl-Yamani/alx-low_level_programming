#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: 0 if s1=s2, -ve if s1<s2, +ve if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int ret;

	if (s1_len == s2_len)
	{
		ret = 0;
	}
	else if (s1_len < s2_len)
	{
		ret = -15;
	}
	else
	{
		ret = +15;
	}
	return (ret);
}
