#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the listint_t list to traverse.
 *
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0; /* Initialize a variable to count nodes. */

	while (h)
	{
		node_count++; /* Increment the node count. */
		h = h->next; /* Move to the next node. */
	}

	return (node_count); /* Return the number of nodes. */
}

