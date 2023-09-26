#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to listint_t (head)
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
