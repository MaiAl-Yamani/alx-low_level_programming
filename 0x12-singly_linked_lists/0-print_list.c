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
	int null_len = 0;
	const list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (-1);
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%i] (nil)\n", null_len);
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		temp = h;
		h = h->next;
	}
	return (count);
}

