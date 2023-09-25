#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a listint_t list.
 * @head: The first node in the linked list.
 *
 * Return: The resulting sum.
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0; /* Initialize the total sum to zero. */
	listint_t *current_node = head; /* Initialize a pointer to the current node*/

	while (current_node)
	{
		total_sum += current_node->n; /* Add the current node to the total sum. */
		current_node = current_node->next; /* Move to the next node. */
	}

	return (total_sum); /* Return the resulting sum. */
}

