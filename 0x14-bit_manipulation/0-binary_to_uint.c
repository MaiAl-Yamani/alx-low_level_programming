#include "main.h"
/**
 * Pow - returns result of a to the power of b
 * @a: base
 * @b: exponent
 *
 * Return: power result
 */
int Pow(int a, int b)
{
	int power = 1, i;

	for (i = 0; i < b; i++)
	{
		power = power * a;
	}
	return (power);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to to a string of 0 and 1 chars (binary)
 *
 * Return: converted number, or 0 if (chars is not 0 or 1 or b is NULL)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int len = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n += (b[i] - '0') * Pow(2, (len - 1 - i));
	}
	return (n);
}
