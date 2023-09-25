#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list with a unique approach.
 * @head: A pointer to the linked list to search for a loop.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	if (!head)
		return (NULL);

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			hare = head;
			while (hare != tortoise)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}

