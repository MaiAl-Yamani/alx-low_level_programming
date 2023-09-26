#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t list
 * @head: pointer to pointer to list_t
 * @index:  index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *nxt;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = *head;
		*head = (*head)->next;
		free(nxt);
		return (1);
	}
	prev = *head;
	nxt = (*head)->next;
	while (nxt != NULL)
	{
		if (i == index)
		{
			prev->next = nxt->next;
			free(nxt);
			return (1);
		}
		prev = nxt;
		nxt = nxt->next;
		i++;
	}
	return (-1);
}

