#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size); i++)
	{
		calloc[i] = 0;
	}
	return (calloc);
}
