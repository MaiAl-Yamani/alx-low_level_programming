#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer to listint_t
 *
 * Return: node dats (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
		return (0);
	temp = *head;
	result = temp->n;
	(*head) = (*head)->next;

	free(temp);
	return (result);
}
