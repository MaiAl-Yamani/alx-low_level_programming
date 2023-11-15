#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character input c to be checked
 *
 * Return: res 1 if c is a alphabetic char, 0 otherwise
 */
int _isalpha(int c)
{
	int res;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
