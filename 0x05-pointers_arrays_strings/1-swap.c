#include "main.h"
/**
 * void swap_int(int *a, int *b) - swaps two integer numbers
 * @a: pointer to a
 * @b: pointer to b
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temp1, temp2;
	temp1 = *b;
	temp2 = *a;

	*a = temp1;
	*b = temp2;
}
