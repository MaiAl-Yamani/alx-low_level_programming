#include "main.h"
/**
 * flip_bits - returns number of bits needed to be flipped to get from n to m
 * @n: first decimal number
 * @m: second decimal number
 *
 * Return: number of bits needed to be flipped for n to be m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int res;
	int c = 0;

	while (xor_res != 0)
	{
		res = xor_res & 1;
		if (res == 1)
			c++;
		xor_res = xor_res >> 1;
	}
	return (c);
}
