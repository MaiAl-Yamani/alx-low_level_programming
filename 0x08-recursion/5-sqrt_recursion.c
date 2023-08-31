#include "main.h"
/**
 * find_sqrt - calculate i*i reltion with n
 * @n: number we want to find its sqrt
 * @i: iterator number
 *
 * Return: i
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i <= n)
	{
		return (find_sqrt(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int to get its natural square root
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 2));
	}
}
