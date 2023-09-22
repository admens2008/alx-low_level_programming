#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
size_t element_count = 0; /* Initialize a variable to count elements */

	while (h)
	{
		element_count++; /* Increment the element count. */
		h = h->next; /* Move to the next element. */
	}

	return (element_count); /* Return the number of elements in the list. */
}

