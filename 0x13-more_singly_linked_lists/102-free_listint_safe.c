#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to listint_t
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr1, *ptr2, *head;
	size_t count1 = 0, count2 = 0;

	if (h == NULL || *h == NULL)
		return (0);
	ptr1 = ptr2 = head = *h;
	while (head != NULL)
	{
		ptr2 = *h;
		count2 = 0;
		while (count1 > count2)
		{
			if (ptr1 == ptr2)
			{
				*h = NULL;
				return (count1);
			}
			count2++;
			ptr2 = ptr2->next;
		}
		count1++;
		ptr1 = head->next;
		free((void *)head);
		head = ptr1;
	}
	*h = ptr1;
	return (count1);
}
