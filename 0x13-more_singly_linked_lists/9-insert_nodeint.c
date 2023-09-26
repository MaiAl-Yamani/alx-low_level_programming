#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to list_t (head)
 * @idx: new node index position
 * @n: new node n value
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev, *temp;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev = *head;
	temp = (*head)->next;
	while (temp != NULL)
	{
		if (i == idx)
		{
			prev->next = new_node;
			new_node->next = temp;
			return (new_node);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL && i == idx)
	{
		prev->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
