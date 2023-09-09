#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min int
 * @max: max int
 *
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i < (max + 1); i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
