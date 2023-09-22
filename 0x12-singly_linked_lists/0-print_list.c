#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%i] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}

