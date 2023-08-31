#include "main.h"
/**
 * _isdigit - checks for digit (0 to 9)
 * @c: int character
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
