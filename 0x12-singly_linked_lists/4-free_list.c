#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases memory used by a linked list and its string elements.
 * @head: A pointer to the list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head->next;

		/* Free the dynamically allocated string */
		if (head->str)
			free(head->str);

		free(head);

		head = current_node;
	}
}

