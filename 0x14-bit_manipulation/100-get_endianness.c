#include "main.h"
/**
 * get_endianness - checks endianness of the system
 *
 * Return: 1 if Little Endian, 0 if Big Endian
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	return (*ptr);
}
