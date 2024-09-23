#include "search_algos.h"
/**
 * binary_search - searches for value in a sorted array using the Binary search
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0;
	size_t high = size;


	if (array == NULL)
	{
		return (-1);
	}

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
