#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to const listint_t
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t count1 = 0, count2 = 0;

	ptr1 = head;
	ptr2 = head;
	while (ptr1 != NULL)
	{
		while (count1 > count2)
		{
			if (ptr1 == ptr2)
			{
				printf("-> [%p] %d\n", (void *)ptr2, ptr2->n);
				return (count1);
			}
			count2++;
			ptr2 = ptr2->next;
		}
		ptr2 = head;
		count2 = 0;
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);
		count1++;
		ptr1 = ptr1->next;
	}
	return (count1);
}
