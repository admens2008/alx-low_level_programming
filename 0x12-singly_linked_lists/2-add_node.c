#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The new string to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node); /* clean up and free allocated memory if strdup fails */
		return (NULL);
	}

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

