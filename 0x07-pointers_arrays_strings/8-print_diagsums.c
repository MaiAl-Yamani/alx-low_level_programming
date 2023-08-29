#include "main.h"
#include <stdio.h>
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
	int sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j =0; j < size && j == i; j++)
		{
			sum = sum + a[j];
		}
	}
	printf("%d\n", sum);
}
