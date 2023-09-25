#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specified index.
 * @head: A pointer to the first element in the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	while (i < index)
	{
		if (!temp_node)
			return (-1);

		prev_node = temp_node;
		temp_node = temp_node->next;
		i++;
	}

	if (!temp_node)
		return (-1);

	prev_node->next = temp_node->next;
	free(temp_node);

	return (1);
}

