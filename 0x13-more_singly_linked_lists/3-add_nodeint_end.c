#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to listint_t
 * @n: number to be added to list
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}

	new_node =  malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (*head);
}
