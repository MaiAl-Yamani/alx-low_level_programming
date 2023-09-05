#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ar[h] = malloc(width * sizeof(int));
		if (ar[h] == NULL)
		{
			for (--h; h >= 0; h--)
			{
				free(ar[h]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ar[h][w] = 0;
		}
	}
	return (ar);
}
