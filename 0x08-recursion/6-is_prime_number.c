#include "main.h"
/**
 * find_mul - finds multipliers of number n
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if prime, 0 oherwise
 */
int find_mul(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (find_mul(n, i + 1));
	}
}
/**
 * is_prime_number - checks if n is a prime number or not
 * @n: number to check
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_mul(n, 2));
	}
}
