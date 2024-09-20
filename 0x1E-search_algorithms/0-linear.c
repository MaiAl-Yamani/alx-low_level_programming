#include "search_algos.h"
/**
 * linear_search - searches for a value using Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int ret;
	size_t i;

	if (array == NULL)
	{
		ret = -1;
		return (ret);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
			if (value == *(array + i))
			{
				ret = i;
				return (ret);
			}
		}
	}

	ret = -1;
	return (ret);
}
