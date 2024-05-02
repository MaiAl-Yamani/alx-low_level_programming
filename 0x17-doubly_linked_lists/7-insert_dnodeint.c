#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: ndex of the list where the new node should be added. Index starts at 0
 * @n: integer data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *previous = *h;
	dlistint_t *current = (*h)->next;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (c == idx)
		{
			new->prev = previous;
			previous->next = new;
			new->next = current;
			previous = new;
			return (new);
			/*if (current)
			{
				new->next = current;
				current->prev = new;
				current = new;
			}
			else
			{
				new->next = NULL;
				current = new;
			}
			return (new);*/
		}
		c++;
		previous = current;
		current = current->next;
	}
	if (current == NULL && c == idx)
	{
		new->prev = previous;
		previous->next = new;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}

