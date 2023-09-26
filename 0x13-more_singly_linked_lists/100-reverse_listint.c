#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to list_t (head)
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	*head = NULL;
	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = *head;
		*head = curr;
		curr = temp;
	}
	return (*head);
}
