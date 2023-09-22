#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The string to put in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node); /* Clean up and free allocated memory if strdup fails */
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node; /* Set the new node as the head if the list is empty */
		return (new_node);
	}

	while (current->next)
		current = current->next;

	current->next = new_node; /* Add the new node to the end of the list */

	return (new_node);
}

