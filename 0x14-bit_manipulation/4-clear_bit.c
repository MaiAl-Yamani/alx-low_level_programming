#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index at which the function sets its bit to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1 << index);

	if (n == NULL)
		return (-1);
	if (index > 63)
		return (-1);
	*n = *n & mask;
	return (1);
}
