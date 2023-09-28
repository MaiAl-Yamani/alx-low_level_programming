#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index to return value at
 *
 * Return: value at the specified index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;
	unsigned int c = 0;

	while (n != 0)
	{
		res = n & 1;
		if (c == index)
			return (res);
		c++;
		n = n >> 1;
	}
	return (-1);
}
