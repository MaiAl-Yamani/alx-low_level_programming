#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: charcter input to check if it is lowercase or not
 *
 * Return: (res) 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int res;

	if (c <= 97 && c <= 122)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
