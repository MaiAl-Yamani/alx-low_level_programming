#include "function_pointers.h"
/**
 * array_iterator - executes a function as parameters of elements of array
 * @array: array variable
 * @size: size of array
 * @action: pointer to function that prints array elements
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
