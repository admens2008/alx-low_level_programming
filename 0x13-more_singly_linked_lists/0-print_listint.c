#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A linked list of type listint_t to print.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; /* Initialize a variable to count nodes. */

	while (h)
	{
		printf("%d\n", h->n); /* Print the value of the current node. */
		node_count++; /* Increment the node count. */
		h = h->next; /* Move to the next node. */
	}

	return (node_count); /* Return the number of nodes. */
}

