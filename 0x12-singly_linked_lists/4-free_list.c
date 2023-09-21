#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to list_t (head)
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next_ptr;

	current = head;
	while (current != NULL)
	{
		next_ptr = current->next;
		free(current->str);
		free(current);
		current = next_ptr;
	}
}
