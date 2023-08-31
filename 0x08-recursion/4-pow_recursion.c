#include "main.h"
/**
 * _pow_recursion - returns value of x power y
 * @x: int number
 * @y: int number to be the power
 *
 * Return: int x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
