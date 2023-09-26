#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to list_t (head)
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
