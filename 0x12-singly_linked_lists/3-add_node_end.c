#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - adds node at the end of list_t
 * @head: pointer to pointer to list_t
 * @str: pointer to string
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	int c;
	char *dup_str;
       
	dup_str = strdup(str);
	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}

	for (c = 0; dup_str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (*head);
}
