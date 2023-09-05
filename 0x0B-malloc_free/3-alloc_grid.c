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
	ar = malloc((width * height) * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			ar[h][w] = 0;
			w++;
		}
		_putchar('\n');
		h++;
	}
	return (ar);
}
