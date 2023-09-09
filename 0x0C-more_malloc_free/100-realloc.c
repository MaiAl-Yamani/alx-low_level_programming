#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
