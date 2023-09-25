#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specified index.
 * @head: The first node in the linked list.
 * @index: The index of the node to return.
 *
 * Return: A pointer to the node at the given index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0; /* Initialize an index counter. */
	listint_t *current_node = head; /* Initialize a pointer to the current node*/

	while (current_node && node_index < index)
	{
		current_node = current_node->next; /* Move to the next node. */
		node_index++; /* Increment the index counter. */
	}

	return (current_node ? current_node : NULL); /* Return the node or NULL */
}

