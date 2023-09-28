#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to set to 1.
 *
 * Description: This function sets the bit at the given index to 1
 * in the number pointed to by n.
 *
 * Return: 1 for success, -1 for failure (if the index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((*n) | (1UL << index));
	return (1);
}

