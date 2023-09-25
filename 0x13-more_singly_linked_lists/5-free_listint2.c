#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head to NULL.
 * @head: A double pointer to the listint_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}

