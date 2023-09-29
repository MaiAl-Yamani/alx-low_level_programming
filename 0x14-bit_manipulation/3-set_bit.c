#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index at which function change bit value to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == NULL)
		return (-1);
	if (index > 63)
		return (-1);
	*n = *n | mask;
	return (1);
}
