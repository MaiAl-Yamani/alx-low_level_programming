#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array a
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar(*(a + i));
		i--;
	}
	_putchar('\n');
}
