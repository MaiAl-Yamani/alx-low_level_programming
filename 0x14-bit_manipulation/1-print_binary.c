#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints binary representation of a number
 * @n: the number to print its binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int res, idx = 0;
	char *bin;

	if (n == 0)
		_putchar('0');
	bin = malloc(sizeof(unsigned long int) + 1);
	if (bin == NULL)
		return;
	while (n != 0)
	{
		res = n & 1;
		bin[idx] = res + '0';
		idx++;
		n = n >> 1;
	}
	bin[idx] = '\0';
	for (--idx; idx >= 0; --idx)
		_putchar(bin[idx]);
	free(bin);
}
