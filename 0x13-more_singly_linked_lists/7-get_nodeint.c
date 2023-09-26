#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: pointer to listint_t
 * @index: index at which the function returns node
 *
 * Return: pointer to listint_t or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i++;
		head = head->next;
		if (i == index)
		{
			return (head);
		}
	}
	if (i < index)
		return (NULL);
	return (NULL);
}
