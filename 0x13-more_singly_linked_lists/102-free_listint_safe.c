#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @my_h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list with uniqueness
 */
size_t free_listint_safe(listint_t **my_h)
{
	size_t my_len = 0;
	int my_diff;
	listint_t *my_temp;

	if (!my_h || !*my_h)
		return (0);

	while (*my_h)
	{
		my_diff = *my_h - (*my_h)->next;
		if (my_diff > 0)
		{
			my_temp = (*my_h)->next;
			free(*my_h);
			*my_h = my_temp;
			my_len++;
		}
		else
		{
			free(*my_h);
			*my_h = NULL;
			my_len++;
			break;
		}
	}

	*my_h = NULL;

	return (my_len);
}

