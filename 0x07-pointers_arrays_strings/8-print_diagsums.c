#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to int matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i,j;
	int sum[][size];

	sum [0][0] = 0;
	for (i =0; i < size; i++)
	{
		for (j =0; j < size && j == i; j++)
		{
			sum[0][0] += a[i][j];
		}
		_putchar(sum_1);
	}
}
