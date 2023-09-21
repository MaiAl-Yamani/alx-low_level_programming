#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0, null_len = 0;
	const list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (-1);
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%i] %s\n", null_len, h->str);
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

