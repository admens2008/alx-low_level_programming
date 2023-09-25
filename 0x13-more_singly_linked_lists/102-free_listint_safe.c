#include "lists.h"

/**
 * free_listint_safe - Frees a linked list and handles potential loops.
 * @h: A double pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    listint_t *current, *next;

    if (!h || !*h)
        return (0);

    while (*h)
    {
        current = *h;
        next = current->next;

        /* Check for a potential loop by comparing addresses */
        if (current < next)
        {
            len++;
            free(current);
            *h = next;
        }
        else
        {
            free(current);
            *h = NULL; /* Break the loop */
            len++;
            break;
        }
    }

    return (len);
}

