#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: char to be initialized with
 *
 * Return: char pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
