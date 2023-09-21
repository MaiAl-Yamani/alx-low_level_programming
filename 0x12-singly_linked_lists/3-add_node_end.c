#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
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
	/*int s_len;*/

	/*for (s_len = 0; dup_str[s_len] != '\0'; s_len++)*/
	current = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (current && current->next != NULL)
	{
		current = current->next;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (*head);
}
