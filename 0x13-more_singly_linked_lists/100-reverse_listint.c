#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to list_t (head)
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *nxt = NULL;

	if (head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (curr != NULL)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	*head = prev;
	return (*head);
}
