#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to list_t (head)
 *
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	int count = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (-1);
	while (h != NULL)
	{
		count++;
		temp = h;
		h = h->next;
	}
	return (count);
}

