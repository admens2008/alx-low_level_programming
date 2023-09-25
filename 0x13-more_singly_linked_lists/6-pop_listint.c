#include "lists.h"

/**
 * pop_listint - Removes and returns the data from the head node.
 * @head: A pointer to the first element in the linked list.
 *
 * Return: The data inside that was removed, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int removed_data;

	if (!head || !*head)
		return (0);

	removed_data = (*head)->n; /* Store the data of the head node. */
	current = (*head)->next;   /* Move to the next node. */
	free(*head);              /* Free the head node. */
	*head = current;          /* Update the head pointer to the new head. */

	return (removed_data);
}

